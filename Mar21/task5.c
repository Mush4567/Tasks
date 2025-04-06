#include <stdio.h>
int main(){
	int a = 0;
	int b = 0;
	scanf("%d",&a);
	int a1 = a;
	while(a1>0){
		a1 /= 10;
		b++;
	}
	a1 = a;
	for(int i = 0; i<b;++i){
		if(a1%10 != 4 && a1%10 != 7){
			printf("Hajoxak tiv che\n");
			return 0;
		}
		a1 /= 10;
		}
	printf("Hajoxak tiv e\n");
}
