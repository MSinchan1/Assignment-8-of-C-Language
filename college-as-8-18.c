#include<stdio.h>
/*
The given program prints following picture.
A
AA
AAA
AAAA
AAAAA 
*/
int main()
{
    for(int i=1;i<=5;i++)//TO PRINT NO OF ROW
    {
        for(int j=1;j<=i;j++)// TO PRINT NO OF CHARACTER
        {
            printf("%c",'A');//AAAAA...AAAA....AAA....AA.....A
        }
        printf("\n");
    }
    return 0;
}