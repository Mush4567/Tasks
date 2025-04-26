#include <stdio.h>
int factorial(int n){
	long int res = 1;
	while(n>0){
		res *= n;
		--n;
	}
	return res;
}

int main(){
	int a = 0;
	scanf("%d",&a);
	long int res = factorial(a);
	printf("%ld",res);
}
