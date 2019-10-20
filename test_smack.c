#include "assert.h"
int main(){
	int a[50];
	a[0] = 1;
	int index = 0;

	// for(int i=0; i< 50; i++){
	// 	a[i] = 0;
	// 	assert(a[i]==0);
	// 	if(i == 20){
	// 		assert(a[i]!=0);
	// 	}
	// }

	while(a[index]<1000){
		a[index] = index*index;
		index++;
		assert(index<50);
		if(index==20){
			assert(a[index]>1000);
		}
	}

	// for(int i=0; i<5; i++){
	// 	for(int j=0;j<10; j++){
	// 		index = i*10 + j;
	// 		a[index] = 1;
	// 		assert(a[index]==1);
	// 		if(index==20){
	// 			assert(a[index]!=1);
	// 		}
	// 	}
	// }
	return 0;
}
