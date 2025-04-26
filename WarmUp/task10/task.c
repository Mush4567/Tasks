#include <stdio.h>
int fib(int n){
	if(n>=0 && n<2){
		return n;
	}
	int a = 0;
	int b = 1;
	int c;
	for(int i = 2;i <= n; ++i){
		c = a+b;
		a = b;
		b = c;
	}
	return b;
}
int main(){
	int n = 0;
	scanf("%d",&n);
	int ret = fib(n);
	printf("%d",ret);
}
