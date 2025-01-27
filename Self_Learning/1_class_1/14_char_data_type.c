#include<stdio.h>
int main(){
    char ch ='a';
    printf("%c\n",ch);
    char ch1 ='A';
    printf("%d",ch1);
    #include <stdio.h>


    char character;

    // Taking character input from user
    printf("Enter a character: ");
    scanf(" %c", &character);  // Notice the space before %c to consume any leading whitespace

    // Printing the character
    printf("You entered: %c\n", character);

    return 0;
}


