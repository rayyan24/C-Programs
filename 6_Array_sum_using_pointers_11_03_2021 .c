#include <stdio.h>
int sum(int *a, int n);
int main()
{
    int a[100], i, j, n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element Number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("%d", sum(a, n));

    return 0;
}
int sum(int *a, int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + *a;
        a++;
    }
    return sum;
}