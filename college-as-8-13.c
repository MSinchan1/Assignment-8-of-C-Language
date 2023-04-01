#include<stdio.h>
/*
Write a program for output:.
EDCBA
DCBA
CBA
BA
A
*/
int main()
{
    char alphabet='E';// TAKING THE FIRST CHARACTER
    for(int i=5;i>=1;i--)//TO PRINT NO OF ROWS
    {
        for(int j=0;j<i;j++)//TO PRINT NO OF CHARACTER IN A ROW
        {
            printf("%c",alphabet-j);// EDCBA....DCBA...CBA...BA....A
        }
        alphabet-=1;//D.....C.....B.....A
        printf("\n");
    }
    return 0;
}
