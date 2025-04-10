#include <stdio.h>
void func(int a){
	if(a>0){
		if(a==0){
			return;
		}
		func(a/2);
		printf("%d",a%2);
}
}
int main(){
	int a = 0;
	scanf("%d",&a);
	if(a==0){
		printf("0");
	}else{
	func(a);
	}
	return 0;
}
