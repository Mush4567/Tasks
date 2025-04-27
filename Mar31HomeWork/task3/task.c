#include <stdio.h>
int main(){
	
	int size;
	scanf("%d",&size);

	char str[size+1];
	scanf("%s",str);

	while(str[size]!='\0'){
		size++;
	}

	for(int i = 0; i < size/2; ++i){
		char rev = str[i];
		str[i] = str[size-i-1];
		str[size-i-1] = rev;
	}
	printf("%s\n",str);
	return 0;
}
