#include<stdio.h>
void fib(int n);
int main()
{
    fib(10);
    return 0;
}
void fib(int n)
{
    int a=-1,b=1,i,c;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}