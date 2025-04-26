#include <stdio.h>
int main(){
	const int size = 10;
	char  arr[size];
	for(int i = 0; i < size; ++i){
		scanf("%c",&arr[i]);
	}
	for(int i = 0; i< size ; ++i){
		if(arr[i]>=48 && arr[i]<=57){
			printf("%c",arr[i]);
		}
	}
	printf("\n");
	return 0;
}
