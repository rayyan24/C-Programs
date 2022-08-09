#include<stdio.h>
void table(int x);
int main()
{
    table(5);
    return 0;
}
void table(int x)
{
    int i;
    for ( i = 1; i <=10; i++)
    {
        printf("%d x %d = %d \n",x,i,x*i);
    }
    
}