#include<stdio.h>
int main(){
    float m1 = 33; //maths marks
    float m2 = 34; //physics marks
    float m3 = 56; //chemistry marks
    float m4 = 98; //english marks
    float m5 = 94; //painting marks
    float p = (m1 + m2 + m3 + m4 + m5)*100/500;
    printf("percentage of five subject is : %f",p);
    return 0;
}