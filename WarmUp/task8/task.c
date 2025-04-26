#include <stdio.h>
int main(){
	int size = 3;
	int arr1[size];
	int arr2[size];
	for(int i = 0; i < size; ++i){
		printf("[%d]",i);
		scanf("%d",&arr1[i]);
	}
	for(int i = 0 ; i < size; ++i){
		printf("[%d]",i);
		scanf("%d",&arr2[i]);
	}
	for(int i = 0; i < (2 * size); ++i){
		if(i < size){
			printf("%d ",arr1[size-1-i]);
		}else{
			printf("%d ",arr2[2*size-1-i]);
		}
	} 
}
