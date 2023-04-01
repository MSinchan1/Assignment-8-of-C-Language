#include<stdio.h>
/*
Write a C program prints following picture.
ABCDEF
BCDEF
CDEF
DEF	
EF
F
*/
int main()
{
    char alphabet='A';//TAKING THE FIRST CHARACTER AS AN INPUT
    for(int i=5;i>=0;i--)//TO PRINT NO OF ROWS
    {
        for(int j=0;j<=i;j++)//TO PRINT NO OF CHARACTER IN A ROW
        {
            printf("%c",alphabet+j);//ABCDEF...BCDEF....CDEF....DEF....DE...F
        }
        alphabet+=1;//B....C...D...E...F
        printf("\n");
    }
    return 0;
}
