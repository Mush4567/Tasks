#include <stdio.h>
int fct(int a){
	int res = 1;
	while(a>1){
		res *= a;
		--a;
	}
	return res;
}
