#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter the %d num\n", i);
        scanf("%d", &n);
        sum = sum + n;
    }
    printf("Sum = %d", sum);
    return 0;
}
