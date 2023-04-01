#include<stdio.h>
/*
Write a program for output:.
ABCDE
ACEG
ADG
AE
A
*/
int main()
{
    int k=1;//TAKING AN INTEGER
    for(int i=5;i>=1;i--)//TO PRINT NO OF ROWS
    {
        for(int j=0;j<i;j++)//TO PRINT NO OF CHARACETRS IN  A ROW
        {
            printf("%c",66+j*k-1);//66+0*1-1.....66+1*1-1.....AND SO ON.....
        }
        k++;//2....3....4....5
        printf("\n");
    }
    return 0;
}