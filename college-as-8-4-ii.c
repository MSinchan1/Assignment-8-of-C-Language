#include<stdio.h>
/*
1.	Write a C program to print the following outputs: 
    BCDEFGHIJ
*/
int main()
{
    for(int i=1;i<=9;i++)
    {
        printf("%c",65+i);//ASCII VALUE+i : B....C.....D......E.....F......G.....H......I......J
    }
    return 0;
}