#include<malloc.h>
int sum() {
  unsigned i, sum;
  // int* array = (int *)malloc(10*sizeof(int));;
  int array[10];
  for(i=0; i<11; i++)
    array[i] = i;
  return 0;
}

int main()
{
  int y;
  y=sum();
  return 0;
}
