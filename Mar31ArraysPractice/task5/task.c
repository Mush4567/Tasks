#include <stdio.h>
int main(){
		const int size = 6;
	char arr[size];
	for(int i = 0;i<size;++i){
		scanf(" %c",&arr[i]);
	}
	for(int i = 0; i <size ; ++i){
		printf("%c",arr[size-1-i]);
	}
}
