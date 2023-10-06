#include <stdio.h>
int main()
{
    int i, n, sum = 0, bignum = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter the %d num\n", i);
        scanf("%d", &n);
        if (n > bignum)
        {
            bignum = n;
        }
    }
    printf("greatest number=%d", bignum);
    return 0;
}