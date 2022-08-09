#include<stdio.h>
int main()
{
 
    int a[10], i, bigNum,positive=0,negative=0,zero=0;
    for (i = 0; i < 10; i++)
    {
        printf("enter the element: ");
        scanf("%d", &a[i]);
    }
    bigNum = a[i];
    for (i = 0; i < 10; i++)
    {
        if (a[i]>0)
        {
            positive++;
        }
        if (a[i]<0)
        {
            negative++;
        }
        if (a[i]==0)
        {
            zero++;
        }
    }
        printf(" positive=%d \n negative=%d \n zero=%d",positive,negative,zero);
    return 0;
}