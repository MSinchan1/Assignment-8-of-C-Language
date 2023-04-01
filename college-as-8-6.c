#include<stdio.h>
//Write a program for output: ACEGI
int main()
{
    for(int i=2;i<=10;i+=2)
    {
        printf("%c",63+i);//ASCII VALUE+i : A....C...E...G...I
    }
    return 0;
}
