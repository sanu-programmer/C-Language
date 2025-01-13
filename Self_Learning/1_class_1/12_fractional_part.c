#include<stdio.h>
int main(){
    float x;
    printf("Enter your decimal number :");
    scanf("%f",&x);
    int y =x;
    printf("\nYour integeral part number is : %d",y);
    float z = x-y;
    printf("\n\nYour fractional part number is : %f\n\n",z);

    return 0;
}