#include<stdio.h>
/*
Write a program for output:
ABCDE
BCDE
CDE
DE
E
*/
int main()
{
    int i,j,k=5;
    for(i=1;i<=5;i++) //TO PRINT  THE ROW
    {
        for(j=k;j>=1;j--)//TO PRINT ELEMENTS IN A ROW
        {
            printf("%c",70-j);// ABCDE....BCDE....CDE...DE...E
        }
        k-=1; //4...3...2...1...0
        printf("\n");
    }
    return 0;
}