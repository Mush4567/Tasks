#include <stdio.h>
int sum(int a);
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d",&a);
	if(a>0){
		if(a==1){
			printf("Parz tiv che %d tivy\n",a);
		}else{
			for(int i = 2;i<=a;++i){
				if(a % i == 0){
					b++;
				}
				 c += b;
			}
			
			if(c>3){
				printf("%d Parz tiv che!\n",a);
			}else{
				printf("%d Parz tiv e!\n",a);
			}
	}	
		
	}else{
		printf("Grir drakan tiv\n");
	}
	int res = sum(a);
	return res;
}
