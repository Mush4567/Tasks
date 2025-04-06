#include <stdio.h>
int main(){
	int a = 0;
	int b = 0;
	printf("Write number: ");
	scanf("%d",&a);
	int a1 = a;
	for(int i = 1;i<a;++i){
		if(a%i==0){
			printf("%d ",i);
			b += i;
		}
	}
	printf("\n");
	if(a1==b){
		printf("Kataryal tiv e!");
	}else{
		printf("Kataryal tiv che!");
	}


}
