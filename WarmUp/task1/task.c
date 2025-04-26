#include <stdio.h>
int main(){
	const int size = 5;
	int arr1[size];
	int arr2[size];
	printf("Please Write arr1 is value: ");
	for(int i = 0;i < size; ++i){
		scanf("%d",&arr1[i]);
	}
	printf("Please Write arr2 is value: ");
	for(int i = 0;i < size; ++i){
		scanf("%d",&arr2[i]);
	}
	for(int j = 0; j < size; ++j){
		printf("[%d]=%d\n",j,arr1[j]*arr2[j]);
	}
	return 0;
}
