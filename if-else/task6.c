#include <stdio.h>
int main(){
	int a = 0;   
	int b = 0;
	int num = 0;
        scanf("%d",&a);
	int a1 = a;
	while(a>0){
		a = a/10;
		b++;
	}
	for(int i = 0;i<b;i++){
		num= a1%10;
		a1 = a1/10;
	
	printf("%d",num);
}  
}
