#include<stdio.h>
int main(){
int a,b; //a>b
    printf("Enter dividend : ");
    scanf("%d",&a);
    printf("Enter divisor : ");
    scanf("%d",&b);
    int q = a/b;
    printf("the value of quotient when %d is divided by %d is %d  : \n\n",a,b,q);
    int r = a-(b*q);
    printf("The value of remainder when %d is divided by %d is %d : \n\n",a,b,r);
    return 0;
}