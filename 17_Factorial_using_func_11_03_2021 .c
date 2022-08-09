#include<stdio.h>
int factorial(int x);
int main()
{
    int a;
    a = factorial(5);
    printf("%d",a);
    return 0;
}
int factorial(int x)
{
    int i,fac=1;
    for (i= 1; i<=x; i++)
    {
        fac=fac*i;
    }
        return fac
    
}
