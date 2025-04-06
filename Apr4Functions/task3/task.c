#include <stdio.h>
int fct(int a,int b);
int main(){
	int a = 0;
	int b = 0;
	int summ = 1;
	printf("Write number:");
	scanf("%d",&a);
	if(a>0){
	b = a;
	int a1 = a;
	while(a>0){
		summ *= b;
		--b;
		--a;
	}
	printf("%d factorial = %d\n",a1,summ);
	int res = fct(a,b);
	return res;
}else{
	printf("Sxal arjeq!!");
}
}
