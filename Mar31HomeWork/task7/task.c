#include <stdio.h>
int main(){
	const int size = 6;
	int arr[size];
	for(int i = 0;i<size;++i){
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<size-1;++i){
		if(arr[i] < arr[i+1]){

		}else{
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");

}
