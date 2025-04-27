#include <stdio.h>
int main(){
	const int size = 8;
	char arr[size];
	for(int i = 0; i < size; ++i){
		scanf(" %c",&arr[i]);
	}
	for(int i = 0; i < size/2;++i){
		if(arr[i] != arr[size-1-i]){
			printf("Bary palindrome che!");
			return 0;
		}
	}
		printf("Bary Palindrome e!");
		
	return 0;
}
