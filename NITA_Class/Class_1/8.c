#include<stdio.h>

int main(){
    int x, y, z;
    printf("Enter the  2 number:");
    scanf("%d%d",&x,&y);
    printf("The number before swaping are %d and %d \n",x,y);
    
    z=x;
    x=y;
    y=z;
    printf("The number after swaping using third variable is %d and %d\n",x,y);
    // x=x+y;
    // y=x-y;
    // x=x-y;
    // printf("The number after swaping without using third variable is %d and %d",x,y);
}