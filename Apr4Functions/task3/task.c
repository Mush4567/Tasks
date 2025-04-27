#include <stdio.h>
int fct(int a);
int main(){
	int a = 0;
	scanf("%d",&a);
	printf("The factorial of %d is %d\n", a, fct(a));
	return 0;
}
