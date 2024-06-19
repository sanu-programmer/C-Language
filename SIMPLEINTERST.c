#include<stdio.h>
int main(){
    float princple,rate,time,si;
    printf("Enter princple : ");
    scanf("%f",&princple);
    printf("Enter rate : ");
    scanf("%f",&rate);
    printf("Enter time : ");
    scanf("%f",&time);
    si =(princple*rate*time)/100;
    printf("The value of simple interst is :%f",si);
    return 0;
}