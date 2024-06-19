#include<stdio.h>
int main(){
    int a=2; //{a%b = a},, [a<b]
    int b =4;
    int q =a/b;
    printf("The value of quotient is :%d \n\n",q);
    int r = a % b;
    printf("The value of remainder is  : %d\n\n",r);
    return 0;
}