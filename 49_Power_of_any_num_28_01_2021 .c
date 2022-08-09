#include <stdio.h>
int main()
{
    int power, base, i, ans = 1;
    printf("Enter the base:  ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &power);
    for (i = 1; i <= power; i++)
    {
        ans = base * ans;
    }
    printf("%d^%d=%d\n", base, power, ans);
    return 0;
}
