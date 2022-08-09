#include <stdio.h>
int sum(int a, int b);
int product(int a, int b);
int main()
{
    int x, y;
    printf("Enter 1st num: ");
    scanf("%d", &x);
    printf("Enter 2nd num: ");
    scanf("%d", &y);
    printf("%d + %d=%d\n", x, y, sum(x, y));
    printf("%d x %d=%d\n", x, y, product(x, y));
    // printf("%d\n", sum(x, y) + product(x, y));
    printf("%d\n", sum(sum(x, y),product(x, y)));
    return 0;
}
int sum(int a, int b)
{
    return (a + b);
}
int product(int a, int b)
{
    return (a * b);
}