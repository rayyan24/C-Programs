
#include<stdio.h>
void gen_prime(int x);
int main()
{
    gen_prime(10);
    return 0;
}
void gen_prime(int x)
{
    int i;
    for (i = 1; i <= x; i+=2)
    {
        printf("%d\n",i);
    }
    
}
