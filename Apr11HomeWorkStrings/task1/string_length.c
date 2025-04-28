#include <stdio.h>
int string_length(const char * str){
	int count = 0;
	while(*(str + count) != '\0'){
		++count;
	}
	return count;
}
