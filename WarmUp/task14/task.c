#include <stdio.h>
int sum(int n){
	int res = 0;
	while(n!=0){
		res += n%10;
		n /=10;
	}
	return res;
}

int main(){
	int a = 0;
	scanf("%d",&a);
	int res = sum(a);
	printf("%d\n",res);
	return 0;
}
