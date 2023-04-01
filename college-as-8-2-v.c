#include<stdio.h>
//Write a c program to print the following patterns
//(v)	  ABBCCC
int main()
{   
    for(int i=1;i<=3;i++)//1.....2.....3
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",64+i);//A....BB....CCC
        }
    }
    return 0;
}