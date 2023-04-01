#include<stdio.h>
/*Write a c program to print the following patterns: 
(ii)	ABCDE 
*/
int main()
{
    for(int i=1;i<=5;i++)
    {
        printf("%c",64+i);//ASCII VALUE+i: A....B....C....D....E
    }
    return 0;
}