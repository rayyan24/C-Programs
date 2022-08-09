#include <stdio.h>
int main()
{
    int i, n, sum = 0, smallnum;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter the %d num\n", i);
        scanf("%d", &n);
        if (n < smallnum)
        {
            smallnum = n;
        }
    }
    printf("smallest number= %d", smallnum);
    return 0;
}