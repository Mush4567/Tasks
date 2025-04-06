#include <stdio.h>
int main(){
	int a = 0;
	int sum = 0;
	scanf("%d",&a);
	if(a==0){
		printf("0 chi kareli nermucel!!");
	}
	int a1 = a;
	for(int i = 1;i<=a/2;++i){
		if(a%i==0){
			printf("%d ",i);
		}
	}
	printf("%d\n",a1);
}
