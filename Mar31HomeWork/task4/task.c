#include <stdio.h>
int main(){
	const int size = 10;
	int arr[size];
	for(int i = 0;i<size;++i){
		scanf("%d",&arr[i]);
	}
	int i = 0;
	int j = size-1;
	while(i<j){
		while(arr[i] % 2 == 0){
			++i;
		}
		while(arr[j] % 2 != 0){
			--j;
		}
		if(i<j){
			int swap = arr[i];
			arr[i] = arr[j];
			arr[j] = swap;
		}
	}
	printf("\n");
	for(int i = 0; i < size; ++i){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
