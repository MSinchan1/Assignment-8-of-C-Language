#include<stdio.h>
/*
Write a C program prints following picture.
A
BA
CBA
DCBA
EDCBA
*/
int main()
{
    int alphabet=65;//TAKING THE ASCII VALUE AS A INPUT OF FIRST CHARACTER
    for(int i=0;i<5;i++)//TO PRINT NO OF ROWS
    {
        for(int j=0;j<=i;j++)//TO PRINT NO OF CHARACTER IN A ROW
        {
            printf("%c",alphabet-j);//A....BA....CBA....DCBA.....EDCBA
        }
        alphabet+=1;//66...67....68....69
        printf("\n");
    }
    return 0;
}