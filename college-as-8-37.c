#include<stdio.h>
/*
Write a C program prints following picture.
AAAAABBBBCCCDDE
*/
int main()
{
    for(int i=5;i>=1;i--)//TO PRINT NO OF ROWS
    {
        for(int j=1;j<=i;j++)//TO PRINT NO OF ROWS IN A CHARACTERS
        {
            printf("%c",'F'-i);//AAAAA....BBBB....CCC....DD...E
        }
    }
    return 0;
}