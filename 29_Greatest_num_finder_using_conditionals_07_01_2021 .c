#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    printf("Enter the third number\n");
    scanf("%d", &c);
    d = (a > b ? (a > c ? a : c) : (b > c ? b : c));
    printf("Highest number is %d", d);
    return 0;
}