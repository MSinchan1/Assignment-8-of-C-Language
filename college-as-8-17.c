#include<stdio.h>
/*
The given program prints following picture.
AAAAA
AAAA
AAA
AA
A

*/
int main()
{
    for(int i=5;i>=1;i--) //TO PRINT NO OF ROW
    {
        for(int j=1;j<=i;j++)//TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("%c",'A');//AAAAA....AAAA.....AAA.....AA.....A
        }
        printf("\n");
    }
    return 0;
}