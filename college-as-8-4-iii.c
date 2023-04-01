#include<stdio.h>
/*
1.	Write a C program to print the following outputs: 
 ACEGI

*/
int main()
{
    for(int i=2;i<=10;i+=2)
    {
        printf("%c",63+i);//ASCII VALUE+i : A....C....E....G...I
    }
    return 0;
}