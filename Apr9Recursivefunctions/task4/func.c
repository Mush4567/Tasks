#include <stdio.h>
void func(int n){
	if(n<0){
		printf("-1");
	}else if(n==0){
		printf("0");
	}else{
		for(int i = 0;i<=n;++i){
			printf("%d ",i);
		}
	}
}

int main(){
	int a = 0;
	printf("Pleas Write a Number: ");
	scanf("%d",&a);
	func(a);
}
