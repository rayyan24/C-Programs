
#include<stdio.h>
int main()
{
    int n,i,bignum=0,rem;
    printf("Enter the number\n");
    scanf("%d", &n);
    for(i=n;i!=0;i=i/10)
    {
        rem=i%10;
        if(rem>bignum)
        {
            bignum=rem;
        }
    }
    printf("%d",bignum);
return 0;
}
// 1)Conversion of decimal to octal, hexa decimal and vice versa

// 2) table of any number

// 3) accept a number from the user and find out sum of all the digits



// 4) find out the greatest digit in a number

// 5) check number is palindrome or not