#include <stdio.h>
int main(){
	const int size = 10;
	char arr[size];
	for(int i = 0 ;i < size; ++i){
		scanf("%c",&arr[i]);
	}
	for(int i = 0;i < size; ++i){
		if(arr[i] > 64 && arr[i] < 91){
			printf("%c",arr[i]);
		}else if(arr[i] > 96 && arr[i] < 123){
			printf("%c",arr[i] - 32);
		}else{
			printf(" ");
		}
	}
		printf("\n");
		return 0;
}
