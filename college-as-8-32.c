#include<stdio.h>
/*
Write a C program prints following picture.
A
CF
EHK
GJMP
ILORU
*/
int main()
{
    int alphabet=65;//TAKING THE INPUT OF THE FIRST CHARACTERS' ASCII VALUE
    for(int i=0;i<14;i+=3)//TO PRINT NO OF ROW
    {
        for(int j=0;j<=i;j+=3)//TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("%c",alphabet+j);//A....CF.....EHK....GJMP....ILORU
        }
        alphabet+=2;//67....69...71....73
        printf("\n");
    }
    return 0;
}