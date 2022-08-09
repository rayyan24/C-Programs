#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    printf("Numbers before swapping\n");
    printf("%d \n", a);
    printf("%d\n", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Numbers after swapping\n");
    printf("%d \n", a);
    printf("%d\n", b);

    return 0;
}