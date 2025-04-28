#include <stdio.h>
int compare_strings(const char *str1, const char *str2){
	while(*str1 && *str2){
		if(*str1 != *str2){
			if(*str1<*str2){
				return -1;
			}else{
				return 1;
			}
		}
		++str1;
		++str2;
	}
	if(*str1 == *str2)
	{
		return 0;
	}else if(*str1<*str2){
		return -1;
	}else{
		return 1;
	}

}
