#include <stdio.h>
int main(){
	int a = 0;
	printf("Write Number:");
	scanf("%d",&a);
	int b = 0;
	for(int i = 1;i<=a;++i){
		for(int j = 0 ;j < i ; ++j ){
			b+=1;
			printf("%d ",b);
		}
		printf("\n");
	
	}

}
