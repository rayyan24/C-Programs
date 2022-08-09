#include<stdio.h>
int is_prime(int x);
int main()
{
    is_prime(1);
    return 0;
}
int is_prime(int x)
{
    if (x%2==0)
    {
        printf("%d is not prime",x);
    }
    else
    {
        printf("%d is prime",x);
    }
    
}