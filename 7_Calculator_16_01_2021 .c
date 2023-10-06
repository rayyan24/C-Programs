#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
cal:
    printf("Enter 1 for addition\t Enter 2 for subtraction \t Enter 3 for multiplication \t Enter 4 to exit\n");
    scanf("%d", &c);
    if (c == 4)
        exit(0);
    printf("Enter 1st number\n");
    scanf("%d", &a);
    printf("Enter 2nd number\n");
    scanf("%d", &b);
    if (c == 1)
    {
        printf("%d + %d = %d\n", a, b, a + b);
    }
    else if (c == 2)
    {
        printf("%d - %d = %d\n", a, b, a - b);
    }
    else if (c == 3)
    {
        printf("%d x %d = %d\n", a, b, a * b);
    }
    goto cal;
    return 0;
}