#include <stdio.h>
int main(){
	const int size = 10;
	char arr[size];
	for(int i = 0;i < size ; ++i){
		scanf("%c",&arr[i]);
	}
	for(int i = 0;i < size ; ++i){
		if(arr[i] >= 65 && arr[i] <= 90){
			printf("%c",arr[i]);
		}else{
			printf("%c",arr[i]-32);
		}
	}
}
