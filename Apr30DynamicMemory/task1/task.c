#include <stdio.h>
#include <stdlib.h>
int main(){
	int size = 0;
	printf("Please Write a Number: ");
	scanf("%d",&size);
	int * p = malloc(size * sizeof(int));
	for(int i = 0;i<size;++i){
		scanf("%d",p + i);
	}
	for(int i= 0; i<size; ++i){
		printf("[%d] = %d\n",i,*(p+i));
	}
	printf("\n");
	free(p);
	return 0;
}	
