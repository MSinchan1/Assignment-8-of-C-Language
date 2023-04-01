#include<stdio.h>
/*
Write a C program prints following picture.
A
CD
EFG
GHIJ
IJKLM

*/
int main()
{
    int alphabet=65;//TAKING THE ASCII VALUE AS A INPUT OF THE FIRST CHARACTER
    for(int i=0;i<5;i++)//TO PRINT NO OF ROWS
    {
        for(int j=0;j<=i;j++)//TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("%c",alphabet+j);//A....CD.....EFG....GHIJ....IJKLM
        }
        alphabet+=2;//67...69...71...73
        printf("\n");
    }
    return 0;
}