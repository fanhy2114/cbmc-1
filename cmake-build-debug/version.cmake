
    file(STRINGS ${CBMC_SOURCE_DIR}/config.inc
      config_inc_v REGEX "CBMC_VERSION *= *[0-9.]+")
    string(REGEX REPLACE "^CBMC_VERSION *= *" "" CBMC_RELEASE ${config_inc_v})
    execute_process(
      COMMAND "/usr/bin/git" "describe" "--tags" "--always" "--dirty"
      OUTPUT_VARIABLE GIT_INFO
      OUTPUT_STRIP_TRAILING_WHITESPACE
    )
    configure_file(${CUR}/version.cpp.in version.cpp)
    