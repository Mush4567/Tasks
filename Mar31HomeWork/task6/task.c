#include <stdio.h>
int main(){
	const int size = 6;
	int arr[size];
	printf("Please Write a Array\n");
	for(int i = 0; i<size;++i){
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int n = 0;
	printf("Please Write a Value: ");
	scanf("%d",&n);
	for(int i = 0;i<size;++i){
		if(arr[i] == n){
			printf("index = %d\n",i);
			return 0;
		}
	}
	printf("-1\n");

}
