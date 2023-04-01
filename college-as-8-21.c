#include<stdio.h>
/*
Write a C program prints following picture.
AAAAAAAAAA
AAAAAAAA
AAAAAA
AAAA
AA
*/
int main()
{
    for(int i=10;i>=2;i-=2)//TO PRINT NO OF ROWS 
    {
        for(int j=1;j<=i;j++)// TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("A");//AAAAAAAAAA....AAAAAAAA.....AAAAAA...AAAA..AA
        }
        printf("\n");
    }
    return 0;
}
