#include <stdio.h>
int main(){
	const int size = 7;
	int arr[size];
	for(int i = 0; i < size;++i ){
		scanf("%d",&arr[i]);
	}
	int num;
	for(int i = 0;i<size-1;++i){
		if(arr[i] == arr[i+1]){
			 num = arr[i]; 
		}
	}
	for(int i = 0;i<size;++i){
		if(num != arr[i]){
			printf("%d\n",arr[i]);
		}
	}


}
