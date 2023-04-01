#include<stdio.h>
//Write a c program to print the following patterns
//CEGIK    
int main()
{
    for(int i=2;i<=10;i+=2)
    {
        printf("%c",65+i);//ASCII VALUE OF+i:   C......E.....G....I....K
    }
    return 0;
}