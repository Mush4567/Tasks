#include <stdio.h>
int fib(int n)
{
	if(n>=0){
		if(n<2){
			return n;
		}
		return fib(n-1) + fib(n-2);
	}
}


int main(){
	int a = 0;
	scanf("%d",&a);
	int ret = fib(a);
	printf("%d\n",ret);

}
