#include <stdio.h>
int main(){
        int a = 0;
        printf("Write number:");
        scanf("%d",&a);
        for(int i = 1;i<=a;++i){
                for(int j = 0;j<i;++j){
                        printf("%d ",i);
                }
                printf("\n");
        }

}

