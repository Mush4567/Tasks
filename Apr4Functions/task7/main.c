#include <stdio.h>
int power(int num, int exp);
int main(){
	int a = 0;
	int b = 0;
	printf("Please Write a Number1: ");
	scanf("%d",&a);
	printf("Please Write a Number2: ");
	scanf("%d",&b);
	int res = power(a,b);
	printf("%d tvi %d astijany = %d\n",a,b,res);
	return 0;
}
