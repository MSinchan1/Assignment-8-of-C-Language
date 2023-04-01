#include<stdio.h>
/*
4.	Write a C program to print the following outputs: 
(i)	ABCDEF
*/
int main()
{
    for(int i=1;i<=6;i++)
    {
        printf("%c",64+i);//ASCII VALUE+i :A....B.....C....D....E....F
    }
    return 0;
}