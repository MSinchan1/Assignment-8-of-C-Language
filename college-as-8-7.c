#include<stdio.h>
//Write a program for output: FEDCBA  
int main()
{
    for(int i=1;i<=6;i++)
    {
        printf("%c",71-i); //ASCII VALUE+i : F....E....D....C.....B.....A
    }
    return 0;
}