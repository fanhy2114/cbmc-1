#include <assert.h>
extern void __VERIFIER_error() __attribute__ ((__noreturn__));
int main(){
  int a=1;
  int b=2;
  int c=a+b;
  if(c==3){
    __VERIFIER_error();
  }
  return 0;
}
