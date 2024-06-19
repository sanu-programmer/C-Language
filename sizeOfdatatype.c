#include<stdio.h>
int main(){
    short a =30*1000 +2768; //chota dabba(-32768 to +32767) 2bytes=16bits
    printf("%d\n",a);
    int b =30*1000 +2768; //big dabba 4 bytes =32bits 
    printf("%d\n",b);
    long long c =30*100000 +27689; //verybig 8 bytes =64 bits
    printf("%d",c);
    return 0;
}
