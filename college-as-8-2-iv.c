#include<stdio.h>
//Write a c program to print the following patterns
//(iv)	 FEDCB    
int main()
{
    for(int i=5;i>=1;i--)
    {
        printf("%c",65+i);//ASCII VALUE+I:  F.....E.....D....C....B
    }
    return 0;
}