#include<stdio.h>
/*
Write a C program prints following picture.
ABCDE
BDFH
CFI
DH
E
*/
int main()
{
    int alphabet=64,k=1;//TAKING THE INPUT OF THE FIRST CHARACTERS ASCII VALUE
    for(int i=5;i>=1;i--)//TO PRINT NO OF ROWS
    {
        for(int j=1;j<=i;j++)//TO PRINT NO OF CHARACTERS IN A ROW
        {
            printf("%c",alphabet+j*k);//ALPHABET+1*1...ALPHABET+1*2.....
        }
        k+=1;//2....3....4....5
        printf("\n");
    }
    return 0;
}