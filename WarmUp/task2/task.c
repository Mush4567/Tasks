#include <stdio.h>
int main(){
	const int size = 6;
	int arr[size];
	float res = 0;
	for(int i = 0; i < size; ++i){
		scanf("%d",&arr[i]);
		res += arr[i];
	}
	printf("result = %f\n",res/size);

}
