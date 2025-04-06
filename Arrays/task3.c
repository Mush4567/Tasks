#include <stdio.h>
int main(){
        int i = 0;
        int index = 0;
        int max = 0;
        scanf("%d",&i);
        printf("Please Enter %d Value\n",i);
        int arr[i];
        while(index<i){
                scanf("%d",&arr[index]);
                index++;
        }

        max = arr[0];
        index = 1;
        int max_index = 0;
        while(index<i){
                if(max<arr[index]){
                max = arr[index];
                max_index = index;
                }
                index++;
        }

        printf("max index = %d \n",max_index);
        return 0;
}
