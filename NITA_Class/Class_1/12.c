#include<stdio.h>
int main(){
    float DA,HR,TA,BS,GS;
    printf("Enter the Basic Salary:");
    scanf("%f",&BS);
    DA = (12*BS)/100;
    HR = (7*BS)/100;
    TA = (5*BS)/100;
    GS = DA+HR+TA+BS;
    printf("The Gross Salary is %f ",GS);

}