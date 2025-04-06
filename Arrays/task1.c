#include <stdio.h>
int main(){
        int max = 0;
        int i = 0;
        int index = 0;
        scanf("%d",&i);
        printf("Please Enter %d value: ",i);
        int arr[i];
        while(index<i){
                scanf("%d",&arr[index]);
                index++;
        }
        max = arr[0];
        index = 1;
        while(index<i){
                if(max<arr[index]){
                        max = arr[index];
                }
                        index++;
        }
        printf("max = %d\n",max);
        return 0;
}
