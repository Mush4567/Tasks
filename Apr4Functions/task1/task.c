#include <stdio.h>
int sum(int a);
int main(){	
	int a = 0;
	printf("Mutqagrir tivy: ");
	scanf("%d",&a);
	for(int i = 1;i<11;++i){
		printf("%d * %d = " ,a,i);
		printf("%d\n",a*i);
	}
	int res = sum(a);
	return res;
}

