#include <stdio.h>
int main(){
	int a = 5;
	int * ptr = &a;
	printf("%p\n",ptr);
	printf("%p\n",&a);
	printf("%d\n",*ptr);
	
}
