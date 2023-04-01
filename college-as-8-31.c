#include<stdio.h>
/*
Write a C program prints following picture.
A
DF
GIK
JLNP
MOQSU
*/
int main()
{
    char alphabet='A';//TAKING THE INPUT OF THE FIRST CHARACTER
    for(int i=0;i<9;i+=2)//TO PRINT NO OF ROWS
    {
        for(int j=0;j<=i;j+=2)//TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("%c",alphabet+j);//ALPHABET+J:  A.....DE....GIK.....JLNP.....MOQSU
        }
        alphabet+=3;//D....G.....J.....M
        printf("\n");
    }
    return 0;
}