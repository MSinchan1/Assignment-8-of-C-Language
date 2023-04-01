#include<stdio.h>
/*
Write a program for output:.
ABCDE
ABCD
ABC
AB
A
*/
int main()
{
    for(int i=5;i>=1;i--)//TO PRINT ROW
    {
        for(int j=1;j<=i;j++)//TO PRINT NO OF CHARACTER IN A ROW
        {
            printf("%c",64+j);//ASCII VALUE+j: ABCDE...ABCD....ABC....AB....A
        }
        printf("\n");
    }
    return 0;
}