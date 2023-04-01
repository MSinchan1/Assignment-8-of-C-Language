#include<stdio.h>
/*
Write a C program prints following picture.
aEDCBA
abDCBA
abcCBA
abcdBA
abcdeA
*/
int main()
{
    for(int i=1;i<=5;i++)//TO PRINT NO OF ROWS
    {
        for(int j=1;j<=i;j++)//TO PRINT NO OF SMALL CHARACTERS IN A ROW
        {
            printf("%c",96+j);//ASCII VALUE+J:  a...ab....abc....abcd....abcde
        }
        for(int k=6-i;k>=1;k--)//TO PRINT NO OF CAPITAL CHARACTERS IN A ROW
        {
            printf("%c",64+k);//ASCII VALUE+K: EDCBA...DCBA...CBA...BA...A
        }
        printf("\n");
    }
    return 0;
}