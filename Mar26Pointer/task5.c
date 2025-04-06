#include <stdio.h>
int main(){
	int *ptr = NULL;
	if(ptr == NULL){
		printf("Pointer is NULL value!\n");
	}
	int a = 10;
	ptr = &a;
	printf("%d\n",*ptr);

}
