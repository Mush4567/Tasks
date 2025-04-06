#include <stdio.h>
int main(){
        int index = 0;
        int i = 0;
        scanf("%d",&i);
        int arr[i];
        printf("Please Enter %d number: ",i);

        while(index<i){
                scanf("%d",&arr[index]);
                ++index;
        }
        index = 1;
        int min = arr[0];
        while(index<i){
             if(min>arr[index]){
                min = arr[index];
             }
             index++;
        }
        printf("min = %d\n",min);

}
