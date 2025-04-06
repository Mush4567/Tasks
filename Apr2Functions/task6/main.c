#include <stdio.h>
double num(double a);
int main(){
	double a = 0;
	scanf("%lf",&a);
	double res = num(a);
	printf("%.1lf\n",res);
	return 0; 
		
}
