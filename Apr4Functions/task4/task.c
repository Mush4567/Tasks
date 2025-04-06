#include <stdio.h>
int sum(int a);
int main(){
	int a = 0;
	int b = 0;
	printf("Write number: ");
	scanf("%d",&a);
	while(a>0){
		b += a%10;
		a = a/10;
	}
	printf("Number = %d\n",b);
	int res = sum(a);
	return res;
}
