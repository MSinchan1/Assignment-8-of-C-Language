#include<stdio.h>
/*
Write a program for output:.
EEEEE
DDDD
CCC
BB
A
*/
int main()
{
    char alphabet='A'; //TAKING THE FIRST CHARACTER
    for(int i=4;i>=0;i--)//TO PRINT NO OF ROW
    {
        for(int j=0;j<=i;j++)//TO PRINT NO OF CHARACTER IN A ROW
        {
            printf("%c",alphabet+i);//EEEEE....DDDD.....CCC....BB....A
        }
        printf("\n");
    }
    return 0;
}
