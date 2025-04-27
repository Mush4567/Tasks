#include <stdio.h>
int main(){
	const int size = 6;
	int arr[size];
	for(int i = 0; i < size; ++i){
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("{");
	for(int i = 0; i <size;++i){
		printf("%d ",arr[i]);
	}
	printf("}\n{");
	int a = arr[0];
	for(int i = 0;i<size-1;++i){
		int swap = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = swap;
		printf("%d ",arr[i]);
	}
	printf("%d }\n",a);

}
