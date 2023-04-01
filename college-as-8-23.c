#include<stdio.h>
/*
Write a C program prints following picture.
A
BC
CDE
DEFG
EFGHI
*/
int main()
{
    char alphabet='A';//TAKING THE INPUT OF FIRST CHARACTER
    for(int i=1;i<=5;i++)//TO PRINT NO OF ROWS 
    {
        for(int j=0;j<i;j++)//TO PRINT NO OF CHARACTER IN A ROW 
        {
            printf("%c",alphabet+j);//A...BC...CDE...DEFG...EFGHI
        }
        alphabet+=1;//B.....C.....D....E
        printf("\n");
    }
    return 0;
}