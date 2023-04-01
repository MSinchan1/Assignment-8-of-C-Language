#include<stdio.h>
/*
 write a program to print given pattern.
A      
BB
CCC
DDDD
*/
int main()
{
    for(int i=1;i<=4;i++)//FOR PRINTING THE ROW 
    {
        for(int j=1;j<=i;j++)//TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("%c",64+i);//A...BB...CCC...DDDD
        }
        printf("\n");
    }
    return 0;
}