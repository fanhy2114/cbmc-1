// extern int _VERIFIER_nondet_int();
#include <assert.h>
#include <malloc.h>

extern int len;
int main(){
  int* a = malloc(sizeof(int)*len);
  a[len-1] = 0;

  int i;
  while( a[i] != 0 )
  {
    i++;
  }
  free(a);
  return 0;
}


// void proc2(char* a){
//   a[len-1] = '&';

//   int i;
//   while( a[i] != '&' ){
//      i++;
//   }
// }




// int nondet_int();
// int *p;
// int global;
// void f (void)
// {
//  int local = 10;
//  int input = nondet_int();

//  p = input ? &local : &global;
// }
// int main (void)
// {
//  int z;
//  global = 10;
//  f ();
//  z = *p;
//  assert (z==10);
//  return 0;
// }


// char s[] = "abc";
// int main(void)
// {
//   char *p = s;
//   p[1] = 'y';
//   assert (s[1]=='y');
//   return 0;
// }


// int a ;
// int main() {
// int* b = &a;
// *b = 0xFFFF;
// char* c = (char*) b;
// *c = 0x0;
// assert (a == 0xFF00);
// return 0;
// }


// int array[5], *p;
// int main()
// {
//   array[1] = 1;
//   p = &array[0];
//   p++;
//   assert ( *p == 1 );
//   return 0;
// }


// extern int len;
// int main()
// {
//   int a[len];
//   a[10] = 1;
//   assert(a[10] == 1);
//   return 0;
// }

// int main()
// {
//   int a[3], y, z;
//   a[0] = a[0] + y;
//   if(a[0]!=1){
//     a[0]=2;
//     if(z) a[0] = a[0] + 1;
//   }
//   assert(a[0]<=3);
//   return 0;
// }
