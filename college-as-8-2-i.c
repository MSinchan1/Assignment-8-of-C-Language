#include<stdio.h>
//2.	Write a c program to print the following patterns: 
//(i)	BCDEF
int main()
{   
    for(int i=1;i<=5;i++)
    {
        printf("%c",65+i);//ASCII VALUE+1: B...C....D....E....F
    }
    return 0;
}
