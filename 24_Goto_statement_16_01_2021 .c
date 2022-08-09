#include <stdio.h>
int main()
{
    int a;
x:
    printf("Enter a number\n");
    scanf("%d", &a);
    if ((a < 0) || (a > 100))
        
    {
        goto x;
    }
    printf("a=%d", a);
    return 0;
}