#include <stdio.h>
int reverse_int(int num){
    int reversed=0;
    while(num!=0){
        reversed=reversed*10+num%10;
        num/=10;
    }return reversed;
}
int Palindrome(int num){
    return num==reverse_int(num);
}
int steps(int num){
    int steps=0;
    while(!Palindrome(num)){
        num+=reverse_int(num);
        steps++;
    }return steps;
}
int main(){
    int num;
    scanf("%d",&num);
    int res=steps(num);
    printf("result: %d\n",res);
    return 0;
}
