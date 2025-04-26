#include <stdio.h>
int power(int num, int exp){
	int res = 1;
	for(int i = 1; i<= exp; ++i){
		res *= num;
	}
	return res;
}
int main(){
	int num = 0;
	printf("Num 1: ");
	scanf("%d",&num);
	int exp = 0;
	printf("Num 2: ");
	scanf("%d",&exp);
	int res = power(num, exp);
	printf("result = %d\n",res);
}
