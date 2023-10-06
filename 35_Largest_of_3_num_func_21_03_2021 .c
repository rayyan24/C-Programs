#include <stdio.h>
void find_big_num(int a, int b, int c);
int main()
{
    int n1, n2, n3;
    printf("Enter Number 1\n");
    scanf("%d", &n1);
    printf("Enter Number 2\n");
    scanf("%d", &n2);
    printf("Enter Number 3\n");
    scanf("%d", &n3);
    find_big_num(n1,n2,n3);
    return 0;
}
void find_big_num(int a, int b, int c)
{
    int bignum;
    if (a > b && a > c)
    {
        printf("\n%d is largest", a);
    }
    else if (b > a && b > c)
    {
        printf("\n%d is largest", b);
    }
    else
    {
        printf("\n%d is largest", c);
    }
}