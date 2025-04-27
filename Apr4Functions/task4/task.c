#include <stdio.h>
int sum(int a);
int main(){
	int a = 0;
	printf("Write number: ");
	scanf("%d",&a);
	printf("Number = %d, sum is %d\n",a, sum(a));
	return 0;
}
