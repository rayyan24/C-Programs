#include <stdio.h>
int main()
{
    int n,fac=1,i=0;
    printf("Enter the number to calculate factorial : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("%d!=%d",n,fac);
    return 0;
}