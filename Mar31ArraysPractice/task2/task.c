#include <stdio.h>
int main(){
	const int size = 5;
	double arr[size];
	for(int i = 0;i<size;++i){
		printf("[%d] = ",i);
		scanf("%le",&arr[i]);
	}
	for(int i = 0; i<size ; ++i){
		printf("[%d] = %.1lf\n",i,arr[i]/size);
	}
	return 0;
}
