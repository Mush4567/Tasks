#include <stdio.h>
void sum(int a){
	int b = 0;
	for(int i = 2;i<=a/2;++i){
		if(a%i==0){
			++b;
		}
		if(b > 0){
			printf("Tivy parz che!\n");
			return;
		}
	}
	printf("Tivy parz e\n");
}
