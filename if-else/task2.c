#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<=b){
        for(int i = a;i<=b;i++){
            if(i % 5 == 0)
            {
                printf("%d ",i);
            }
        }
    }else{
            for(int i = b;i<a;i++){
                if(i % 5==0){
                    printf("%d ",i);
                }
            }
    }
printf("\n");

}

