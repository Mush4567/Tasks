#include <stdio.h>
int main(){
        int a = 0;
        int b = 0;
        int c = 1;
        scanf("%d",&a);
        int a1 = a;
        int temp = a;

        while(temp > 0){
                temp = temp / 10;
                b++;
        }

        for(int i = 1; i < b; ++i){
                c *= 10;
        }

        for(int j = b - 1; j >= 0; --j){
                printf("%d", a1 / c);
                a1 = a1 % c;
                c = c / 10;
                if(j > 0){
                        printf(",");
                }
        }
}

