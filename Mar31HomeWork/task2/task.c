#include <stdio.h>
int main(){
	int size = 0;
	printf("Please Write a Number: ");
	scanf("%d",&size);
	int arr[size];
	for(int i = 0; i < size; ++i){
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i < size; ++i){
		if(arr[i] % 2 == 1){
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
	return 0;
}
