#include<stdio.h>
/*
Write a C program to print the following outputs: 
FEDCBA
*/
int main()
{
    for(int i=6;i>=1;i--)
    {
        printf("%c",64+i);//ASCII VALUE+i: F....E....D.....C....B....A 
    }
    return 0;
}