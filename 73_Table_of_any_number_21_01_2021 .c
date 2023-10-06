#include <stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the number to show the multiplication table: ");
    scanf("%d", &n);
    printf("\n");
    while (i <= 10)
    {
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }

    return 0;
}