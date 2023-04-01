#include<stdio.h>
/*
Write a C program prints following picture.
E
DE
CDE
BCDE
ABCDE
*/
int main()
{
    int alphabet=69;//TAKING THE ASCII VALUE AS A INPUT OF THE FIRST CHARACTER
    for(int i=0;i<5;i++)//TO PRINT NO OF ROWS 
    {
        for(int j=0;j<=i;j++)//TO PRINT OF CHARACTERS IN A ROW
        {
            printf("%c",alphabet+j);//E....DE....CDE....BCDE....ABCDE
        }
        alphabet-=1;//68....67....66.....65
        printf("\n");
    }
    return 0;
}