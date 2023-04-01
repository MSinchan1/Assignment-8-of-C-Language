#include<stdio.h>
/*
Write a C program prints following picture.
     A
    AB
   ABC
  ABCD
 ABCDE
ABCDEF
*/
int main()
{
    for(int i=1;i<=6;i++)//TO PRINT NO OF ROWS
    {
        for(int space=6-i;space>=1;space--)//TO PRINT NO OF SPACE IN A ROW
        {
            printf(" ");
        }
        for(int j=0;j<i;j++)//TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("%c",'A'+j);//A...AB...ABC...ABCD...ABCDE...ABCDEF
        }
        printf("\n");
    }
    return 0;
}