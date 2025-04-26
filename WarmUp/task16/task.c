#include <stdio.h>
#include <string.h>

void str(char *num){
	int len = strlen(num);

	for(int i = 0; i < len/2 ; ++i){
		char temp = num[i];
		num[i] =  num[len - i - 1];
		num[len - i - 1] = temp;
	}

}

int main(){
	char arr[6];
	scanf("%s", arr);
	str(arr);
	printf("%s",arr);
	
}
