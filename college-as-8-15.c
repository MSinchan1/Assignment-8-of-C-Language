#include<stdio.h>
/*
Write a program for output:.
EDCBA
FEDC
GFE
HG
I
*/
int main()
{
    char alphabet='E'; //TAKING THE FIRST CHARACTER
    for(int i=5;i>=1;i--)//TO PRINT NO OF ROWS
    {
        for(int j=0;j<i;j++)//TO PRINT NO OF CHARACTER IN A ROW
        {
            printf("%c",alphabet-j);//EDCBA....FEDC...GFE...HG....I
        }
        alphabet+=1;//F....G....H....I
        printf("\n");
    }
    return 0;
}