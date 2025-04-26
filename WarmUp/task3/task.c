#include <stdio.h>
int main(){
	const int size = 5;
	int arr[size];
	int a = 0;
	for(int i = 0;i < size; ++i){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&a);
	for(int i = 0; i< size ; i++){
		if(a == arr[i]){
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");

}
