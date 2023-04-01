#include<stdio.h>
/*
Write a C program prints following picture.
A
CA
ECA
GECA
IGECA
*/
int main()
{
    int alphabet=65;//TAKING THE ASCII VALUE OF THE FIRST CHARACTER AS AN INPUT
    for(int i=0;i<5;i++)//TO PRINT NO OF ROWS
    {
        for(int j=0;j<=i*2;j+=2)//TO PRINT NO OF CHARCTERS IN A ROW
        {
            printf("%c",alphabet-j);//A...CA....ECA.....GECA.....IGECA
        }
        alphabet+=2;//67...69...71...73
        printf("\n");
    }
    return 0;
}
