#include <stdio.h>
void reverse_string(char *str){
	int count = 0;
	char *start = str;
	while(*str != '\0'){
		++count;
		++str;
	}
	str = start;
	for(int i = 0;i<=count/2;++i){
		int rev = str[i];
		str[i] = str[count-1-i];
		str[count-1-i] = rev;
	}
	printf("Reverse = %s\n",str);
}
