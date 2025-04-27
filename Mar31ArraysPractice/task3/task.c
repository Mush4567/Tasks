#include <stdio.h>
int main(){
	int size = 0;
	printf("Please Write a Number: ");
	scanf("%d",&size);
	int arr1[size];
	int arr2[size];
	for(int i = 0; i < size ; ++i){
		printf("arr1[%d] = ",i);
		scanf("%d",&arr1[i]);
	} 
	for(int i = 0; i < size ; ++i){
		printf("arr2[%d] = ",i);
		scanf("%d",&arr2[i]);
	}
	for(int i = 0; i < size; ++i){
	       printf("[%d] = %d\n",i,arr1[i]*arr2[i]);	
	}
}
