#include<stdio.h>
/*
Write a program for output:.
ABCDE
CDEF
EFG
GH
I
*/
int main()
{
    char alphabet='A'; //FIRST CHARACTER
    for(int i=5;i>=1;i--)//TO PRINT NO OF ROWS
    {
        for(int j=0;j<i;j++)//TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("%c",alphabet+j);// ABCDE...CDEF....EFG....GH....I
        }
        alphabet+=2;//C...E....G...I
        printf("\n");
    }
    return 0;
}