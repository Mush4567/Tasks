#include <stdio.h>
double num(double a,double b);
int main(){
	double a = 0;
	double b = 0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	double res = num(a,b);
	printf("%.2lf\n",res);

}
