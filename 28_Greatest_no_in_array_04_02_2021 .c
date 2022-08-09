#include <stdio.h>
int main()
{
    int a[10], i, bigNum;
    for (i = 0; i < 10; i++)
    {
        printf("enter the element: ");
        scanf("%d", &a[i]);
    }
    bigNum = a[i];
    for (i = 0; i < 10; i++)
    {
        if (bigNum < a[i])
        {
            bigNum = a[i];
        }
    }
    printf("greatest number=%d",bigNum);
    return 0;
}