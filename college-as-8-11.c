#include<stdio.h>
/*
Write a program for output:.
EFGHI
DEFG
CDE
BC
A
*/
int main()
{
    int i,j=5,k;
    k=68;
    for(i=5;i>=1;i--)// TO PRINT NO OF ROWS
    {
        for(j=1;j<=i;j++)// TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("%c",(k+j)); //ASCII VALUE+i : EFGHI....DEFG....CDE...BC...A
        }
        k-=1;//67....66...65....64
        printf("\n");
    }
    return 0;
}