#include<stdio.h>
/*
Write a C program prints following picture.
A
AB
ABC
ABCD
ABCDE
*/
int main()
{
    for(int i=1;i<=5;i++)//TO PRINT NO OF ROWS
    {
        for(int j=1;j<=i;j++)//TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("%c",64+j);//A....AB....ABC....ABCD....ABCDE
        }
        printf("\n");
    }
    return 0;
}