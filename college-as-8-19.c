#include<stdio.h>
/*
The given program prints following picture.
AA
AAA
AAAA
AAAAA
AAAAAA
*/
int main()
{
    for(int i=2;i<=6;i++)//TO PRINT NO OF ROWS
    {
        for(int j=1;j<=i;j++)//TO PRINT NO OF CHARACTER IN A ROW
        {
            printf("%c",'A');//AA....AAA....AAAA....AAAAA.....AAAAAA
        }
        printf("\n");
    }
    return 0;
}
