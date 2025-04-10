#include <stdio.h>
void func(int n){
	if(n<0){
		printf("-1");
	}else if(n<1){
		printf("%d",n);
	}else{
		for(int i = n;i>0;--n){
		printf("%d ",n);
		if(n == 0){
			break;
		}

	}
	}
}
int main(){
	int a = 0;
	printf("Please Write a Number: ");
	scanf("%d",&a);
	func(a);
}
