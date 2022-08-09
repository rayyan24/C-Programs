#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    printf("Enter the third number\n");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest", a);
        }
        else
        {
            printf("%d is greatest", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is greatest", b);
        }
        else
        {
            printf("%d is greatest", c);
        }
        return 0;
    }
}






















    // if(a>b)
    // {
    //     if(a>c)
    //     {
    //         printf("%d is highest",a);
    //     }

    // }
    // if(b>a)
    // {
    //     if(b>c)
    //     {
    //         printf("%d is highest",b);
    //     }

    // }
    // if(c>a)
    // {
    //     if(c>b)
    //     {
    //         printf("%d is highest",c);
    //     }

    // }