#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void assume( bool );

void fence();
int x,y,z,r1,r2;


void* p0(void *) {
  x = 1;
  z = 0;
  z = 1;
  x = 199;
  return NULL;
}                                                                                             

void* p1(void *) {
  z = 0;
  r1= x;
  z = 2;
  r2 = x;
  return NULL;
}

int main() {
  x = 0;
  y = 0;
  pthread_t thr_0;
  pthread_t thr_1;
  pthread_create(&thr_0, NULL, p0, NULL );
  pthread_create(&thr_1, NULL, p1, NULL );
  pthread_join(thr_0, NULL);
  pthread_join(thr_1, NULL);
  assert(!(r1==0 && r2==0));
}

