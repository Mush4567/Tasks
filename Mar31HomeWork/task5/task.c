#include <stdio.h>
int main(){
	const int size = 6;
	int arr1[size];
	int arr2[size];
	for(int i = 0; i<size; ++i){
		printf("arr1[%d] = ",i);
		scanf("%d",&arr1[i]);
	}
	for(int i = 0;i<size;++i){
		printf("arr2[%d] = ",i);
		scanf("%d",&arr2[i]);
	}
	for(int i = 0;i<size;++i){
		if(arr1[i]!=arr2[i]){
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
}	
