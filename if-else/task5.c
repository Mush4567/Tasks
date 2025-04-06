#include <stdio.h>
int main(){
	int a = 0;
	int sum = 1;
	printf("Mutqagrir tiv hashvem faktoryal@: ");
  	scanf("%d",&a);
	for(int i = 1;i<=a;i++){
		sum *= i;
	}	
	printf("%d\n",sum);
        
}   
