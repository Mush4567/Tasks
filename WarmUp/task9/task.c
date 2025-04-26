#include <stdio.h>
double foo(double F){
	F = (F - 32) * 5.0/9.0; 
	return F;
}
int main(){
	double C = 0;
	scanf("%lf",&C);
	double res = foo(C);
	printf("%lf",res);
}
