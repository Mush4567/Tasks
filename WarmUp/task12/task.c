#include <stdio.h>
void num(int n){
	for(int i = 1;i<11;++i){
		printf("%d * %d = %d\n",n,i,i*n);
	}

}
int main(){
	for(int i = 1; i<11;++i){
		num(i);	
	}
	return 0;
}
