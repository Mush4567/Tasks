#include <stdio.h>
void func(int arr[],int index){
	if(index<0){
		return;
	}
		printf("%d ",arr[index]);
	func(arr,index-1);
}

int main(){
	int size = 0;
	scanf("%d",&size);
	int arr[size] = {};
	for(int i = 0;i<size;++i){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	func(arr,size-1);
	printf("\n");
}
