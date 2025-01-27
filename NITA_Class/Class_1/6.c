#include<stdio.h>
int main(){
    int x,y, z,e;
    printf("Enter the Dividend:");
    scanf("%d",&x);
    printf("Enter the Divisor:");
    scanf("%d",&y);
    z = x/y;//Quotient
    e = x % y; //Remainder
    printf("The Quotient and Remainder of the number is %d and %d respectively ",z,e);
}