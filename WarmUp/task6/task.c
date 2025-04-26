#include <stdio.h>
#define size 5
int foo(int*arr1,int*arr2){
	for(int i = 0; i < size; ++i){
		if(*(arr1+i) != *(arr2+i)){
			return -1;
		}
	}
	return 0;
}
int main(){
	int arr1[size];
	int arr2[size];
	for(int i = 0; i < size; ++i){
		printf("[%d] = ",i);
		scanf("%d",&arr1[i]);
	}
	for(int i = 0; i< size; ++i){
		printf("[%d] = ",i);
		scanf("%d",&arr2[i]);
	}
	int ret = foo(arr1,arr2);
	printf("%d\n",ret);
}
