#include<stdio.h>
/*
Write a C program prints following picture.
A
DE
GHI
JKLM
MNOPQ
*/
int main()
{
    int alphabet=65;//TAKING THE ASCII VALUE OF THE FIRST CHARACTER AS AN INPUT
    for(int i=0;i<5;i++)//TO PRINT NO OF ROWS
    {
        for(int j=0;j<=i;j++)//TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("%c",alphabet+j);//A...DE....GHI....JKLM....MNOPQ
        }
        alphabet+=3;//68....71....74....77
        printf("\n");
    }
    return 0;
}