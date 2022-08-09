#include <stdio.h>
int main()
{
    int num,i,rem,sum=0;
    printf("enter the number\n");
    scanf("%d", &num);
    for (i=num;i!=0;i=i/10)
    {
        rem=i%10;
        sum=sum+rem;
    }
    printf("%d",sum);
    return 0;
}
