#include <stdio.h>
int main()
{
    int n, n2, i, rev = 0, rem;
    printf("Enter the number :");
    scanf("%d", &n);
    n2 = n;
    for (i = n; n != 0; n = n / 10)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    if(n2==rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    
    return 0;
}

