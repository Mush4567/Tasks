#include <stdio.h>
void num(int n){
	for(int i = 1;i <= 10; ++i){
		printf("%d * %d = %d\n", i , n , i*n);
	}
}
int main(){
	int n = 0;
	scanf("%d",&n);
	num(n);
	return 0;

}
