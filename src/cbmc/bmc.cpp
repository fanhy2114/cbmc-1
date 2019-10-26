/*******************************************************************\

Module: Symbolic Execution of ANSI-C

Author: Daniel Kroening, kroening@kroening.com

\*******************************************************************/

/// \file
/// Symbolic Execution of ANSI-C

#include "bmc.h"

#include <chrono>
#include <iostream>

#include <util/exit_codes.h>

#include <langapi/language_util.h>

#include <goto-programs/graphml_witness.h>
#include <goto-programs/json_goto_trace.h>
#include <goto-programs/xml_goto_trace.h>

#include <goto-symex/build_goto_trace.h>
#include <goto-symex/memory_model_pso.h>
#include <goto-symex/slice.h>
#include <goto-symex/slice_by_trace.h>

#include <linking/static_lifetime_init.h>

#include "cbmc_solvers.h"
#include "counterexample_beautification.h"
#include "fault_localization.h"
// __FHY_ADD_BEGIN__
#include "show_symbol_table.h"
#include "cpp_language.h"
#include <regex>
#include "memory_model.h"
#include "expr_iterator.h"
std::vector<std::string> fix_constraint;
// __FHY_ADD_END_

/// Hook used by CEGIS to selectively freeze variables
/// in the SAT solver after the SSA formula is added to the solver.
/// Freezing variables is necessary to make use of incremental
/// solving with MiniSat SimpSolver.
/// Potentially a useful hook for other applications using
/// incremental solving.
void bmct::freeze_program_variables()
{
  // this is a hook for cegis
}

void bmct::error_trace()
{
  status() << "Building error trace" << eom;

  goto_tracet &goto_trace=safety_checkert::error_trace;
  build_goto_trace(equation, prop_conv, ns, goto_trace);

  switch(ui)
  {
  case ui_message_handlert::uit::PLAIN:
    result() << "Counterexample:" << eom;
    show_goto_trace(result(), ns, goto_trace, trace_options());
    result() << eom;
    break;

  case ui_message_handlert::uit::XML_UI:
    {
      xmlt xml;
      convert(ns, goto_trace, xml);
      status() << xml;
    }
    break;

  case ui_message_handlert::uit::JSON_UI:
    {
      json_stream_objectt &json_result =
        status().json_stream().push_back_stream_object();
      const goto_trace_stept &step=goto_trace.steps.back();
      json_result["property"] =
        json_stringt(step.pc->source_location.get_property_id());
      json_result["description"] =
        json_stringt(step.pc->source_location.get_comment());
      json_result["status"]=json_stringt("failed");
      json_stream_arrayt &json_trace =
        json_result.push_back_stream_array("trace");
      convert<json_stream_arrayt>(ns, goto_trace, json_trace, trace_options());
    }
    break;
  }
}

/// outputs witnesses in graphml format
void bmct::output_graphml(resultt result)
{
  const std::string graphml=options.get_option("graphml-witness");
  if(graphml.empty())
    return;

  graphml_witnesst graphml_witness(ns);
  if(result==resultt::UNSAFE)
    graphml_witness(safety_checkert::error_trace);
  else if(result==resultt::SAFE)
    graphml_witness(equation);
  else
    return;

  if(graphml=="-")
    write_graphml(graphml_witness.graph(), std::cout);
  else
  {
    std::ofstream out(graphml);
    write_graphml(graphml_witness.graph(), out);
  }
}

void bmct::do_conversion()
{
  status() << "converting SSA" << eom;

  // convert SSA
  equation.convert(prop_conv);

  // hook for cegis to freeze synthesis program vars
  freeze_program_variables();
}

decision_proceduret::resultt
bmct::run_decision_procedure(prop_convt &prop_conv)
{
  status() << "Passing problem to "
           << prop_conv.decision_procedure_text() << eom;

  prop_conv.set_message_handler(get_message_handler());

  auto solver_start = std::chrono::steady_clock::now();

  do_conversion();

  status() << "Running " << prop_conv.decision_procedure_text() << eom;

  decision_proceduret::resultt dec_result=prop_conv.dec_solve();

  {
    auto solver_stop = std::chrono::steady_clock::now();
    status() << "Runtime decision procedure: "
             << std::chrono::duration<double>(solver_stop-solver_start).count()
             << "s" << eom;
  }

  return dec_result;
}

void bmct::report_success()
{
  result() << "VERIFICATION SUCCESSFUL" << eom;

  switch(ui)
  {
  case ui_message_handlert::uit::PLAIN:
    break;

  case ui_message_handlert::uit::XML_UI:
    {
      xmlt xml("cprover-status");
      xml.data="SUCCESS";
      result() << xml;
    }
    break;

  case ui_message_handlert::uit::JSON_UI:
    {
      json_objectt json_result;
      json_result["cProverStatus"]=json_stringt("success");
      result() << json_result;
    }
    break;
  }
}

void bmct::report_failure()
{
  result() << "VERIFICATION FAILED" << eom;

  switch(ui)
  {
  case ui_message_handlert::uit::PLAIN:
    break;

  case ui_message_handlert::uit::XML_UI:
    {
      xmlt xml("cprover-status");
      xml.data="FAILURE";
      result() << xml;
    }
    break;

  case ui_message_handlert::uit::JSON_UI:
    {
      json_objectt json_result;
      json_result["cProverStatus"]=json_stringt("failure");
      result() << json_result;
    }
    break;
  }
}


void bmct::show_program()
{
  unsigned count=1;

  std::cout << "\n" << "Program constraints:" << "\n";

  for(const auto &step : equation.SSA_steps)
  {
    std::cout << "// " << step.source.pc->location_number << " ";
    std::cout << step.source.pc->source_location.as_string() << "\n";
    const irep_idt &function = step.source.pc->function;

    if(step.is_assignment())
    {
      std::string string_value = from_expr(ns, function, step.cond_expr);
      std::cout << "(" << count << ") " << string_value << "\n";

      if(!step.guard.is_true())
      {
        std::string string_value = from_expr(ns, function, step.guard);
        std::cout << std::string(std::to_string(count).size()+3, ' ');
        std::cout << "guard: " << string_value << "\n";
      }

      count++;
    }
    else if(step.is_assert())
    {
      std::string string_value = from_expr(ns, function, step.cond_expr);
      std::cout << "(" << count << ") ASSERT("
                << string_value <<") " << "\n";

      if(!step.guard.is_true())
      {
        std::string string_value = from_expr(ns, function, step.guard);
        std::cout << std::string(std::to_string(count).size()+3, ' ');
        std::cout << "guard: " << string_value << "\n";
      }

      count++;
    }
    else if(step.is_assume())
    {
      std::string string_value = from_expr(ns, function, step.cond_expr);
      std::cout << "(" << count << ") ASSUME("
                << string_value <<") " << "\n";

      if(!step.guard.is_true())
      {
        std::string string_value = from_expr(ns, function, step.guard);
        std::cout << std::string(std::to_string(count).size()+3, ' ');
        std::cout << "guard: " << string_value << "\n";
      }

      count++;
    }
    else if(step.is_constraint())
    {
      std::string string_value = from_expr(ns, function, step.cond_expr);
      std::cout << "(" << count << ") CONSTRAINT("
                << string_value <<") " << "\n";

      count++;
    }
    else if(step.is_shared_read() || step.is_shared_write())
    {
      std::string string_value = from_expr(ns, function, step.ssa_lhs);
      std::cout << "(" << count << ") SHARED_"
                << (step.is_shared_write()?"WRITE":"READ")
                << "(" << string_value <<")\n";

      if(!step.guard.is_true())
      {
        std::string string_value = from_expr(ns, function, step.guard);
        std::cout << std::string(std::to_string(count).size()+3, ' ');
        std::cout << "guard: " << string_value << "\n";
      }

      count++;
    }
  }
}


void bmct::get_memory_model()
{
  const std::string mm=options.get_option("mm");

  if(mm.empty() || mm=="sc")
    memory_model=util_make_unique<memory_model_sct>(ns);
  else if(mm=="tso")
    memory_model=util_make_unique<memory_model_tsot>(ns);
  else if(mm=="pso")
    memory_model=util_make_unique<memory_model_psot>(ns);
  else
  {
    error() << "Invalid memory model " << mm
            << " -- use one of sc, tso, pso" << eom;
    throw "invalid memory model";
  }
}

void bmct::setup()
{
  get_memory_model();

  {
    const symbolt *init_symbol;
    if(!ns.lookup(INITIALIZE_FUNCTION, init_symbol))
      symex.language_mode=init_symbol->mode;
  }

  status() << "Starting Bounded Model Checking" << eom;

  symex.last_source_location.make_nil();

  symex.unwindset.parse_unwind(options.get_option("unwind"));
  symex.unwindset.parse_unwindset(options.get_option("unwindset"));
}

safety_checkert::resultt bmct::execute(
  abstract_goto_modelt &goto_model)
{
  try
  {
    auto get_goto_function = [&goto_model](const irep_idt &id) ->
      const goto_functionst::goto_functiont &
    {
      return goto_model.get_goto_function(id);
    };

    // __FHY_ADD_BEGIN__
//    const namespacet ns(goto_model.get_symbol_table());
//    for(const auto &fun : goto_model.get_goto_functions().function_map){
//      const symbolt &symbol = ns.lookup(fun.first);
//      std::cout<<"---"<<symbol.display_name()<<std::endl;
//    }

//    for(const auto & fun : goto_model.get_goto_functions().function_map){
//    	const symbolt &symbol = ns.lookup(fun.first);
//    	std::cout<<"function name: "<<symbol.display_name()<<std::endl;
//    	get_goto_function(fun.first).body.output(ns,symbol.name, std::cout);
//    }
    // __FHY_ADD_END__
    perform_symbolic_execution(get_goto_function);

    // Borrow a reference to the goto functions map. This reference, or
    // iterators pointing into it, must not be stored by this function or its
    // callees, as goto_model.get_goto_function (as used by symex)
    // will have side-effects on it.
    const goto_functionst &goto_functions =
      goto_model.get_goto_functions();

    if(symex.should_pause_symex)
      return safety_checkert::resultt::PAUSED;

    // This provides the driver program the opportunity to do things like a
    // symbol-table or goto-functions dump instead of actually running the
    // checker, like show-vcc except driver-program specific.
    // In particular clients that use symex-driven program loading need to print
    // GOTO functions after symex, as function bodies are not produced until
    // symex first requests them.
    if(driver_callback_after_symex && driver_callback_after_symex())
      return safety_checkert::resultt::SAFE; // to indicate non-error

    // add a partial ordering, if required
    if(equation.has_threads())
    {
      memory_model->set_message_handler(get_message_handler());
      (*memory_model)(equation);
    }
    
    // __FHY_ADD_BEGIN__
//    for(const auto &step : equation.SSA_steps){
//      if(!step.is_constraint())
//        continue;
//      const irep_idt &function = step.source.pc->function;
//      std::string string_value = from_expr(ns, function, step.cond_expr);
//      std::cout<<string_value<<std::endl;
//    }
    fix_ssa();
    // __FHY_ADD_END__
    statistics() << "size of program expression: "
                 << equation.SSA_steps.size()
                 << " steps" << eom;

    slice();

    // coverage report
    std::string cov_out=options.get_option("symex-coverage-report");
    if(!cov_out.empty() &&
       symex.output_coverage_report(goto_functions, cov_out))
    {
      error() << "Failed to write symex coverage report" << eom;
      return safety_checkert::resultt::ERROR;
    }

    if(options.get_bool_option("show-vcc"))
    {
      show_vcc();
      return safety_checkert::resultt::SAFE; // to indicate non-error
    }

    if(!options.get_list_option("cover").empty())
    {
      return cover(goto_functions)?
        safety_checkert::resultt::ERROR:safety_checkert::resultt::SAFE;
    }

    if(options.get_option("localize-faults")!="")
    {
      fault_localizationt fault_localization(
        goto_functions, *this, options);
      return fault_localization();
    }

    // any properties to check at all?
    if(!options.get_bool_option("program-only") &&
       symex.remaining_vccs==0)
    {
      report_success();
      output_graphml(resultt::SAFE);
      return safety_checkert::resultt::SAFE;
    }

    if(options.get_bool_option("program-only"))
    {
      show_program();
      return safety_checkert::resultt::SAFE;
    }

    return decide(goto_functions, prop_conv);
  }

  catch(const std::string &error_str)
  {
    messaget message(get_message_handler());
    message.error().source_location=symex.last_source_location;
    message.error() << error_str << messaget::eom;

    return safety_checkert::resultt::ERROR;
  }

  catch(const char *error_str)
  {
    messaget message(get_message_handler());
    message.error().source_location=symex.last_source_location;
    message.error() << error_str << messaget::eom;

    return safety_checkert::resultt::ERROR;
  }

  catch(const std::bad_alloc &)
  {
    error() << "Out of memory" << eom;
    return safety_checkert::resultt::ERROR;
  }
}

void bmct::slice()
{
  if(options.get_option("slice-by-trace")!="")
  {
    symex_slice_by_tracet symex_slice_by_trace(ns);

    symex_slice_by_trace.slice_by_trace
    (options.get_option("slice-by-trace"),
        equation);
  }
  // any properties to check at all?
  if(equation.has_threads())
  {
    // we should build a thread-aware SSA slicer
    statistics() << "no slicing due to threads" << eom;
  }
  else
  {
    if(options.get_bool_option("slice-formula"))
    {
      ::slice(equation);
      statistics() << "slicing removed "
                   << equation.count_ignored_SSA_steps()
                   << " assignments"<<eom;
    }
    else
    {
      if(options.get_list_option("cover").empty())
      {
        simple_slice(equation);
        statistics() << "simple slicing removed "
                     << equation.count_ignored_SSA_steps()
                     << " assignments"<<eom;
      }
    }
  }
  statistics() << "Generated "
               << symex.total_vccs<<" VCC(s), "
               << symex.remaining_vccs
               << " remaining after simplification" << eom;
}

safety_checkert::resultt bmct::run(
  abstract_goto_modelt &goto_model)
{
  setup();
  return execute(goto_model);
}

safety_checkert::resultt bmct::decide(
  const goto_functionst &goto_functions,
  prop_convt &prop_conv)
{
  prop_conv.set_message_handler(get_message_handler());

  if(options.get_bool_option("stop-on-fail"))
    return stop_on_fail(prop_conv);
  else
    return all_properties(goto_functions, prop_conv);
}

void bmct::show()
{
  if(options.get_bool_option("show-vcc"))
  {
    show_vcc();
  }

  if(options.get_bool_option("program-only"))
  {
    show_program();
  }
}

safety_checkert::resultt bmct::stop_on_fail(prop_convt &prop_conv)
{
  switch(run_decision_procedure(prop_conv))
  {
  case decision_proceduret::resultt::D_UNSATISFIABLE:
    report_success();
    output_graphml(resultt::SAFE);
    return resultt::SAFE;

  case decision_proceduret::resultt::D_SATISFIABLE:
    if(options.get_bool_option("trace"))
    {
      if(options.get_bool_option("beautify"))
        counterexample_beautificationt()(
          dynamic_cast<bv_cbmct &>(prop_conv), equation);

      error_trace();
      output_graphml(resultt::UNSAFE);
    }

    report_failure();
    return resultt::UNSAFE;

  default:
    if(options.get_bool_option("dimacs") ||
       options.get_option("outfile")!="")
      return resultt::SAFE;

    error() << "decision procedure failed" << eom;

    return resultt::ERROR;
  }
}

/// Perform core BMC, using an abstract model to supply GOTO function bodies
/// (perhaps created on demand).
/// \param opts: command-line options affecting BMC
/// \param model: provides goto function bodies and the symbol table, perhaps
//    creating those function bodies on demand.
/// \param ui: user-interface mode (plain text, XML output, JSON output, ...)
/// \param message: used for logging
/// \param driver_configure_bmc: function provided by the driver program,
///   which applies driver-specific configuration to a bmct before running.
/// \param callback_after_symex: optional callback to be run after symex.
///   See class member `bmct::driver_callback_after_symex` for details.
int bmct::do_language_agnostic_bmc(
  const path_strategy_choosert &path_strategy_chooser,
  const optionst &opts,
  abstract_goto_modelt &model,
  const ui_message_handlert::uit &ui,
  messaget &message,
  std::function<void(bmct &, const symbol_tablet &)> driver_configure_bmc,
  std::function<bool(void)> callback_after_symex)
{
  safety_checkert::resultt final_result = safety_checkert::resultt::UNKNOWN;
  safety_checkert::resultt tmp_result = safety_checkert::resultt::UNKNOWN;
  const symbol_tablet &symbol_table = model.get_symbol_table();
  message_handlert &mh = message.get_message_handler();
  std::unique_ptr<path_storaget> worklist;
  std::string strategy = opts.get_option("exploration-strategy");
  INVARIANT(
    path_strategy_chooser.is_valid_strategy(strategy),
    "Front-end passed us invalid path strategy '" + strategy + "'");
  worklist = path_strategy_chooser.get(strategy);
  try
  {
    {
      cbmc_solverst solvers(opts, symbol_table, message.get_message_handler());
      solvers.set_ui(ui);
      std::unique_ptr<cbmc_solverst::solvert> cbmc_solver;
      cbmc_solver = solvers.get_solver();
      prop_convt &pc = cbmc_solver->prop_conv();
      bmct bmc(opts, symbol_table, mh, pc, *worklist, callback_after_symex);
      bmc.set_ui(ui);
      if(driver_configure_bmc)
        driver_configure_bmc(bmc, symbol_table);
      tmp_result = bmc.run(model);

      if(
        tmp_result == safety_checkert::resultt::UNSAFE &&
        opts.get_bool_option("stop-on-fail") && opts.is_set("paths"))
      {
        worklist->clear();
        return CPROVER_EXIT_VERIFICATION_UNSAFE;
      }

      if(tmp_result != safety_checkert::resultt::PAUSED)
        final_result = tmp_result;
    }
    INVARIANT(
      opts.get_bool_option("paths") || worklist->empty(),
      "the worklist should be empty after doing full-program "
      "model checking, but the worklist contains " +
        std::to_string(worklist->size()) + " unexplored branches.");

    // When model checking, the bmc.run() above will already have explored
    // the entire program, and final_result contains the verification result.
    // The worklist (containing paths that have not yet been explored) is thus
    // empty, and we don't enter this loop.
    //
    // When doing path exploration, there will be some saved paths left to
    // explore in the worklist. We thus need to run the above code again,
    // once for each saved path in the worklist, to continue symbolically
    // execute the program. Note that the code in the loop is similar to
    // the code above except that we construct a path_explorert rather than
    // a bmct, which allows us to execute from a saved state rather than
    // from the entry point. See the path_explorert documentation, and the
    // difference between the implementations of perform_symbolic_exection()
    // in bmct and path_explorert, for more information.

    while(!worklist->empty())
    {
      if(tmp_result != safety_checkert::resultt::PAUSED)
        message.status() << "___________________________\n"
                         << "Starting new path (" << worklist->size()
                         << " to go)\n"
                         << message.eom;
      cbmc_solverst solvers(opts, symbol_table, message.get_message_handler());
      solvers.set_ui(ui);
      std::unique_ptr<cbmc_solverst::solvert> cbmc_solver;
      cbmc_solver = solvers.get_solver();
      prop_convt &pc = cbmc_solver->prop_conv();
      path_storaget::patht &resume = worklist->peek();
      path_explorert pe(
        opts,
        symbol_table,
        mh,
        pc,
        resume.equation,
        resume.state,
        *worklist,
        callback_after_symex);
      if(driver_configure_bmc)
        driver_configure_bmc(pe, symbol_table);
      tmp_result = pe.run(model);

      if(
        tmp_result == safety_checkert::resultt::UNSAFE &&
        opts.get_bool_option("stop-on-fail") && opts.is_set("paths"))
      {
        worklist->clear();
        return CPROVER_EXIT_VERIFICATION_UNSAFE;
      }

      if(tmp_result != safety_checkert::resultt::PAUSED)
        final_result &= tmp_result;
      worklist->pop();
    }
  }
  catch(const char *error_msg)
  {
    message.error() << error_msg << message.eom;
    return CPROVER_EXIT_EXCEPTION;
  }
  catch(const std::string &error_msg)
  {
    message.error() << error_msg << message.eom;
    return CPROVER_EXIT_EXCEPTION;
  }
  catch(std::runtime_error &e)
  {
    message.error() << e.what() << message.eom;
    return CPROVER_EXIT_EXCEPTION;
  }

  switch(final_result)
  {
  case safety_checkert::resultt::SAFE:
    return CPROVER_EXIT_VERIFICATION_SAFE;
  case safety_checkert::resultt::UNSAFE:
    return CPROVER_EXIT_VERIFICATION_UNSAFE;
  case safety_checkert::resultt::ERROR:
    return CPROVER_EXIT_INTERNAL_ERROR;
  case safety_checkert::resultt::UNKNOWN:
    return CPROVER_EXIT_INTERNAL_ERROR;
  case safety_checkert::resultt::PAUSED:
    UNREACHABLE;
  }
  UNREACHABLE;
}

void bmct::perform_symbolic_execution(
  goto_symext::get_goto_functiont get_goto_function)
{
  symex.symex_from_entry_point_of(get_goto_function, symex_symbol_table);
  INVARIANT(
    options.get_bool_option("paths") || path_storage.empty(),
    "Branch points were saved even though we should have been "
    "executing the entire program and merging paths");
}

void path_explorert::perform_symbolic_execution(
  goto_symext::get_goto_functiont get_goto_function)
{
  symex.resume_symex_from_saved_state(
    get_goto_function, saved_state, &equation, symex_symbol_table);
}

// __FHY_ADD_BEGIN__
void bmct::fix_ssa(){
	unsigned int count = 0;
	std::string pattern = R"(!\(__CPROVER_threads_exited#(\d+)\$wclk\$(\d+)(\s*)>=(\s*))";
	pattern.append(R"(__CPROVER_threads_exited#2\$rclk\$(\d+)\)(\s*)\|\|(\s*)(.*))");
	std::regex re(pattern);
	std::regex re_old(R"(__CPROVER_threads_exited#(\d+)(\s*)==(\s*)__CPROVER_threads_exited#(\d+)(\s*)\|\|(\s*)!choice_rf(\d+))");
	std::regex re_guard(R"((!*)\\guard#(\d+))");
	symex_target_equationt::SSA_stept pre_step;
	for(auto &step : equation.SSA_steps){
		const irep_idt &function = step.source.pc->function;
		std::string string_value = from_expr(ns, function, step.cond_expr);
		std::string str = from_expr(ns, function, pre_step.cond_expr);
		if(!(step.is_constraint() && function == "pthread_join"))
			continue;
		std::cout <<"===" <<str <<"\n";
		std::cout <<"===" <<string_value << "\n";
		std::cout<<"function: "<<function<<" ssa: "<<string_value<<std::endl;
		if(std::regex_match(string_value, re)){
			std::string temp_string_value = from_expr(ns, function, pre_step.cond_expr);
			if(std::regex_match(temp_string_value, re_old)){
				pre_step.cond_expr.operands()[1].make_not();
				equation.constraint(pre_step.cond_expr.operands()[1], "fix-ssa", pre_step.source);
				fix_constraint.push_back(from_expr(ns, function, pre_step.cond_expr.operands()[1]));
			}
			else{
				for (const auto &i : pre_step.cond_expr.operands()){
					std::cout << "*** "<<from_expr(ns, function, i) <<"\n";
				}
				assert(pre_step.cond_expr.operands().size() >= 2);
				// init new constraint expression
				// turn choice_rf1 -> guard_rf into guard_rf -> choice_rf
				exprt e(pre_step.cond_expr.id(), pre_step.cond_expr.type());
				pre_step.cond_expr.operands()[1].make_not();
				exprt choice_rf = pre_step.cond_expr.operands()[1];
				std::string guard_string = from_expr(ns, function, pre_step.cond_expr.operands()[0]);
				bool guard_flag = true;
				if(guard_string.substr(0, 2) == "!("){
					guard_flag = false;
					pre_step.cond_expr.operands()[0].make_not();
					guard_string = from_expr(ns, function, pre_step.cond_expr.operands()[0]);
				}
				bool meet_flag = false;
				and_exprt guard_rf;
				guard_rf.copy_to_operands(true_exprt());
				for(auto it = pre_step.cond_expr.depth_begin(); it!=pre_step.cond_expr.depth_end(); it++){
					std::cout <<"---  " << it->operands().size() <<"\n";
					std::cout <<"----- "<< from_expr(ns, function, *it) <<"\n";
					if(it == pre_step.cond_expr.depth_begin())
						continue;
					if(from_expr(ns, function,*it) == guard_string){
						if(!std::regex_search(guard_string, re_guard)){
							break;
						}
						else if (guard_string.find("&&") == std::string::npos){
							guard_rf.copy_to_operands(*it);
							break;
						}
						else{
							for(const auto &i : it->operands()){
								std::string temp_str = from_expr(ns, function, i);
								std::cout << "-------  "<<temp_str <<"\n";
								if(std::regex_search(temp_str, re_guard)){
									meet_flag = true;
									guard_rf.copy_to_operands(i);
								}
								else{
									continue;
								}
							}
						}
					}
					if(meet_flag)
						break;
				}
				if(!meet_flag){
					e = choice_rf;
				}
				else{
					if(guard_flag)
						guard_rf.make_not();
					e.copy_to_operands(choice_rf, guard_rf);

				}
				equation.constraint(e, "fix-ssa", pre_step.source);
				fix_constraint.push_back(from_expr(ns, function, e));
			}
			count++;
		}
		pre_step = step;
	}
  std::cout << "\n" << "Fix SSA expressions: " <<count<< std::endl;
  for(const auto &i : fix_constraint){
  	std::cout << i <<"\n";
  }
}
// __FHY_ADD_END__
