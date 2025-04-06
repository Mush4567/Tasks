#include <stdio.h>
int main() {
    int a = 0;
    int sum = 0;
    for(int i = 0;i<4;i++){
        for(int j = 0;j<6;j++){
                scanf("%d",&a);
                printf("%d ",a);
                if(i==0 && j==0){
                   sum += j;
                }
        }
        printf("\n");
    }
    printf("%d",sum);

}
