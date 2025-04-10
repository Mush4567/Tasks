#include <stdio.h>
int sum(int n){
	if(n>=0){
		if(n<10){
			return n;
		}
		return n%10 + sum(n/10);
	}
}
int main(){
	int a = 0;
	scanf("%d",&a);
	int res = sum(a);
	printf("%d",res);
}
