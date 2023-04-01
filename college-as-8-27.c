#include<stdio.h>
/*
Write a C program prints following picture.
A
AC
ACE
ACEG
ACEGI
*/
int main()
{
    for(int i=0;i<10;i+=2)//TO PRINT NO OF ROWS
    {
        for(int j=0;j<=i;j+=2)//TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("%c",'A'+j);//A....AC....ACE....ACEG.....ACEGI
        }
        printf("\n");
    }
    return 0;
}