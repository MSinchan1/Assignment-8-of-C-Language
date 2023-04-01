#include<stdio.h>
/*
Write a C program prints following picture.
A
AAA
AAAAAA
AAAAAAAAAA
AAAAAAAAAAAAAAA
*/
int main() 
{
    int k=0;
    for(int i=1;i<=5;i++)//TO PRINT NO OF ROWS
    {
        for(int j=1;j<=k+i;j++)//TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("A");//A.....AAA......AAAAAA......AAAAAAAAAA.....AAAAAAAAAA
        }
        k=k+i;//0+1.....1+2......3+3......6+4......10+5
        printf("\n");
    }
    return 0;
}