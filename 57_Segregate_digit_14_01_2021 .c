#include <stdio.h>
int main()
{
    int num,i,rem;
    printf("enter the number\n");
    scanf("%d", &num);
    for (i=num;i!=0;i=i/10)
    {
        rem=i%10;
        printf("%d \n",rem);
    }
    return 0;
}

