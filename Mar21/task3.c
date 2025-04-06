#include <stdio.h>
int main(){
	int n = 0;
	do{
		scanf("%d",&n);
	}while(n<0);
	if(n<=2){
	printf("%d\n",n);	
	}else{
	   int a = 0;
	   int b = 1;
	   int c = 0;
	   for(int i = 2;i<n;i++){
		c = b;
		b = a+b;
		a = c;
	}
		printf("%d\n",b);
	   }
		return 0;
				   
		
}



