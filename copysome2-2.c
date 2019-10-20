/*
 * Benchmarks contributed by Shrawan Kumar, TCS Innovation labs, Pune
 *
 * It implements partial copy and
 * check property accordingly
 */
extern void __VERIFIER_error() __attribute__((__noreturn__));
void __VERIFIER_assert(int cond)
{
  if(!(cond))
  {
  ERROR:
    __VERIFIER_error();
  }
}
int __VERIFIER_nondet_int();
#include <malloc.h>

#define N 5
struct Item
{
  int a[N];
} item;

int fun1()
{
  int *a1 = (int *)malloc((N) * sizeof(int));
  int *a2 = (int *)malloc((N) * sizeof(int));
  // int *p = a1 + 2;

  int i;
  int z;
  z = 3;

  for(i = 0; i < N; i++)
  {
    a1[i] = __VERIFIER_nondet_int();
    a2[i] = (i == z) ? a1[i] : __VERIFIER_nondet_int();
    // __VERIFIER_assert(p[i] == a1[i]);
  }
  for(i = 0; i < N; i++)
  {
    __VERIFIER_assert(a2[i] == a1[i]);
  }
  return 0;
}

int main()
{
  fun1();
  return 0;
}
