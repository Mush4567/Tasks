#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	 int size;
	 scanf("%d",&size);
	char *str = malloc(size * sizeof(char));
	if(str == NULL){
		return 0;
	}
	getchar();
	fgets(str,size+1,stdin);
	printf("%s\n",str);
	printf("count = %lu\n",strlen(str));	
	free(str);
	return 0;
}
