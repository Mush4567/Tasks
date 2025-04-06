#include <stdio.h>
int main(){
	int a = 6;
	int b = 4;
	int ptr2 = b;
	int * ptr = &b;
	*ptr = 5;
	printf("%d\n%d\n",ptr2,*ptr);
}
