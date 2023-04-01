#include<stdio.h>
/*
Write a C program prints following picture.
AXXXX
AAXXX
AAAXX
AAAAX
AAAAA
*/
int main()
{
    for(int i=1;i<=5;i++)//TO PRINT NO OF ROWS 
    {
        for(int j=1;j<=i;j++)//TO PRINT NO OF A IN A ROW
        {
            printf("A");//A...AA...AAA....AAAA...AAAAA
        }
        for(int k=5-i;k>=1;k--)//TO PRINT NO OF X IN A ROW
        {
            printf("X");//XXXX.....XXX.....XX.....X
        }
        printf("\n");
    }
    return 0;
}
