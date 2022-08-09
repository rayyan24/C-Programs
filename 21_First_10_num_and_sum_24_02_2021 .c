#include<stdio.h>
int main()
{
    int sum=0,i;
    for (i = 1; i <=10 ; i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}