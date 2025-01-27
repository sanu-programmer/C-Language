#include<stdio.h>

int main(){
    float HT, BS,AR;
    printf("Enter the value of height:");
    scanf("%f",&HT);
    printf("Enter the value of Base:");
    scanf("%f",&BS);
    AR = HT*BS/2;
    printf("Area of Triangle is %f",AR);

}