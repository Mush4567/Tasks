#include <stdio.h>
int main(){
	const int size = 10;
	int arr[size];
	for(int i = 0;i<size-1;++i){
		scanf("%d",&arr[i]);
	}
	int sum = 0;
	for(int i = 0;i<size;++i){
			sum += arr[i];
	}
	int sum1 = (size * (size+1))/2;
	printf("bacakayox tiv = %d\n",sum1-sum);

}
