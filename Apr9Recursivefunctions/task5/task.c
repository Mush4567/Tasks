#include <stdio.h>
void func(int arr[],int size,int index){
	if(index>=size){
		return;
	}for(int i=0;i<size;++i){
		printf("%d ",arr[i]);
	}
		func(arr,index+1,size);
}
int main(){
	int size = 0;
	printf("Please Write a Number:");
	scanf("%d",&size);
	int arr[size]={};
	int index = size-1;
	for(int i = 0;i<=index;++i){
		scanf("%d",&arr[i]);
	}
	func(arr,size,index);
	printf("\n");
	return 0;
}
