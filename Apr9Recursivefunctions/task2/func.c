#include <stdio.h>
int func(int n){
	if(n<0){
		return 0;
	}
	if(n<10){
		return n;
	}
	return (n%10)*func(n/10);
}
int main(){
	int a = 0;
	scanf("%d",&a);
	int ret = func(a);
	printf("%d\n",ret);
	
}
