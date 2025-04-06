#include <stdio.h>
int main(){
	int a = 0;
	int b = 0;
	int sum = 1;
	scanf("%d",&a);
	scanf("%d",&b);
	for(int i = 0;i<b;i++){
		sum *= a;
	}
	printf("%d\n",sum);

}
