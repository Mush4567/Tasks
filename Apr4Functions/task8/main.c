#include <stdio.h>
int reverse(int num);
int main(){
	int a = 0;
	printf("Please Write a Number: ");
	scanf("%d",&a);
	printf("%d reverse number is %d\n",a,reverse(a));
}
