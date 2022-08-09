#include<stdio.h>
int main()
{
    char a[20],b[20];
    printf("Enter string 1");
    scanf("%[^\n]%*c",a);
    printf("Enter string 2");
    scanf("%[^\n]%*c",b);

    return 0;
}