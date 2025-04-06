#include <stdio.h>
int sum(int a);
int main(){
	int a = 10;
	int b = 0;
	printf("1 ic 10 tveri axyusaky!");
	for(int i = 1;i<=a;++i){
                for(int j = 1;j<=a;++j){
                       b = i * j;
		       printf("%d * %d = %d\n",i,j,b);
                }
		printf("\n");
        }
	int res = sum(a);
	return res;
}
