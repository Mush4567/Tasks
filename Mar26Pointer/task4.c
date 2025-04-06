#include <stdio.h>
int main(){
	int a = 6;
	int b = 8;
	int *ptr = &a;
	printf("%d\n",*ptr);
	a = b;
	b = *ptr;
	printf("%d\n",b);

}
