#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
  int a[10];
  for(int x = 0;x<10; x++)
  {
    a[x] = x;
    assert(a[x]< 5);
  }
  return 0;
}
