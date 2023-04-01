#include<stdio.h>
//1.	Write a c program to print the ASCII code of any character. 
// For example ASCII code of a character. Give inputs: outputs  a:97  A:65  B:66 0:48
int main()
{
    char input;
    printf("Enter any input: ");
    scanf("%c",&input);//INPUT GIVEN BY USER
    printf("ASCII value is : %d",input);//PRINT THE INPUT'S ASCII VALUE
    return 0;
}