#include <stdio.h>
int compare_strings(const char *str1, const char *str2);
int main(){
	char str1[] = "hhggffddeerr";
	char str2[] = "hhggffddeert";
	int rev = compare_strings(str1,str2);
	printf("%d\n",rev);
	return 0;
}	
