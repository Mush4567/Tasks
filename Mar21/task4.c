#include <stdio.h>
int main(){
	int a = 0;
	scanf("%d",&a);
	int b = 0;
	int a1 = a;
	while(a1>0){
		a1 = a1/10;
		b++;
	}
	int k = 0;
	int c = 0;
	a1 = a;
	for(int i = b;i>0;--i){
		c = a % 10;
		int mult = 1;
		for(int j = 0;j<b;j++){
			mult *= c;
		}
		k += mult;
		a = a / 10;
	}
	if(a1!=k){
		printf("Armstrongi tiv che\n");
	}else{
		printf("Armstrongi tiv e\n");
	}
	return 0;
}
