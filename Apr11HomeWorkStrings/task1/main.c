#include <stdio.h>
int string_length(const char * str);
int main(){
	char str[] = "Helloworld";
	int res = string_length(str);
	printf("count = %d\n",res);
	return 0;
}
