#include<stdio.h>
/*
Write a program for output:.
AAAAA
BBBB
CCC
DD
E
*/
int main()
{
    for(int i=5;i>=1;i--) //TO PRINT ROW
    {
        for(int j=1;j<=i;j++)//TO PRINT NO OF CHARACTER IN A ROW 
        {
            printf("%c",'F'-i);//CHARACTER-i : AAAAA.....BBBB....CCC...DD....E
        }
        printf("\n");
    }
    return 0;
}