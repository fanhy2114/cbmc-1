extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern void __VERIFIER_atomic_begin();
extern void __VERIFIER_atomic_end();

#include <pthread.h>

int i=1, j=1;

#define NUM 2

void *
t1(void* arg)
{
  int k = 0;

  for (k = 0; k < NUM; k++) {
    __VERIFIER_atomic_begin();
    i+=j;
    __VERIFIER_atomic_end();
  }
  pthread_exit(NULL);
}

void *
t2(void* arg)
{
  int k = 0;

  for (k = 0; k < NUM; k++) {
    __VERIFIER_atomic_begin();
    j+=i;
    __VERIFIER_atomic_end();
  }
  pthread_exit(NULL);
}

int
main(int argc, char **argv)
{
  pthread_t id1, id2;

  pthread_create(&id1, NULL, t1, NULL);
  pthread_create(&id2, NULL, t2, NULL);
  pthread_join(id1, NULL);
  pthread_join(id2, NULL);

  __VERIFIER_atomic_begin();
  int condI = i > 1;
  __VERIFIER_atomic_end();

  __VERIFIER_atomic_begin();
  int condJ = j > 1;
  __VERIFIER_atomic_end();

  if (!condI || !condJ) {
    ERROR: __VERIFIER_error();
  }

  return 0;
}
