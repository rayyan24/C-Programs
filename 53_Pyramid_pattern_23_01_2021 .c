#include<stdio.h>
int main()
{
    int n=5,row,space,symbol;
    // space=total number of rows - row number
    // space=total number of rows(n) - row number(row)
    for ( space = 1; space <=(n-row); space++)
    {
        printf(" ");
        for ( symbol = 1; symbol <= ((2*n)-1); symbol++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}