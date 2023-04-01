#include<stdio.h>
/*
Write a C program prints following picture.
AAAAABBBBCCCDDE
*/
int main()
{
    int alphabet=70; //TAKING INPUT OF THE LAST CHARACTER
    for(int i=5;i>0;i--)//TO PRINT NO OF ROWS
    {
        for(int j=0;j<i;j++)// TO PRINT NO OF CHARACTER IN A ROW
        {
            printf("%c",alphabet-i);//70-1....70-2....70-3.....70-4....70-5
        }
    }
    return 0;
}