#include<stdio.h>
/*
Write a C program prints following picture.
abcdABCDEFGH01234
abcdABCDEFGHI1234
abcdABCDEFGHIJ234
*/
int main()
{
    int num=0;//TAKING THE NUMBER=0
    for(int i=1;i<=3;i++)//TO PRINT NO OF ROWS 
    {
        printf("abcd");//abcd...abcd...abcd
        for(int j=0;j<(3*2+1)+i;j++)//TO PRINT NO OF CAPITAL LETTERS IN A ROW
        {
            printf("%c",'A'+j);//ABCDEFGH.....ABCDEFGHI.....ABCDEFGHIJ
        }
        for(int k=0;k<3*2-i;k++)//TO PRINT NO OF DIGITS IN A ROW
        {
            printf("%d",num+k);//01234.....1234....234
        }
        num+=1;//1....2....3
        printf("\n");
    }
    return 0;
}