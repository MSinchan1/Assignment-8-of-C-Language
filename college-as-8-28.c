#include<stdio.h>
/*
Write a C program prints following picture.
E
FE
GFE
HGFE
IHGFE
*/
int main()
{
    int alphabet=69;//TAKING THE ASCII VALUE OF THE FIRST CHARACTER AS INPUT
    for(int i=0;i<5;i++)//TO PRINT NO OF ROWS
    {
        for(int j=0;j<=i;j++)//TO PRINT NO OF CHARCTERS IN A ROW
        {
            printf("%c",alphabet-j);//E....FE.....GFE....HGFE....IHGFE
        }
        alphabet+=1;//70....71...72.....73
        printf("\n");
    }
    return 0;
}