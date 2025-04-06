#include <stdio.h>
int sum(int a,int b);
int main(){
	int a = 0;
	int b = 0;
	printf("Grir 1 arjeq@: ");

	scanf("%d",&a);
	printf("Grir 2 arjeq@: ");
	scanf("%d",&b);
	int res = sum(a,b);
	printf("%d\n",res);
	return 0;
}
