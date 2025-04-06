#include <stdio.h>
int main(){
        int i = 0;
        int index = 0;
        int min = 0;
        scanf("%d",&i);
        printf("Please Enter %d Value\n",i);
        int arr[i];
        while(index<i){
                scanf("%d",&arr[index]);
                index++;
        }

        min = arr[0];
        index = 1;
        int min_index = 0;
        while(index<i){
                if(min>arr[index]){
                min = arr[index];
                min_index = index;
                }
                index++;
        }

        printf("min index = %d \n",min_index);
        return 0;
}
