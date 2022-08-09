#include <stdio.h>
void CV (int a, int b);
void CR (int *a, int *b);
int main()
{
    int n, x, y;
    printf("Enter 1 for Call by value\nEnter 2 for Call by refrence\n");
    scanf("%d", &n);
    printf("Enter 1st Number: ");
        scanf("%d", &x);
    printf("Enter 2nd Number: ");
        scanf("%d", &y);
    if (n == 1)
    {
        CV(x, y);
    }
    else if (n == 2)
    {
        CR(&x, &y);
    }

    return 0;
}
void CV (int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
}
void CR (int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;    
    printf("a=%d b=%d",*a,*b);
}