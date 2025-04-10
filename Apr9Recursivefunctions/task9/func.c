#include <stdio.h>

int func(char str[],int i){
	if(str[i]>64 && str[i]<91){
		printf("%c\n",str[i]);
		return 0;
	}
	return func(str,++i);
}

int main(){
	char str[40] = {};
	int i = 0;
	scanf("%s", str);
	func(str, i);
}
