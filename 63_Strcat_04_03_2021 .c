#include<stdio.h>
#include<string.h>
int main()
{
    char a[],b[];
    printf("Enter string 1");
    gets(a);
    printf("Enter string 2");
    gets(b);
    strcat(a,b);
    return 0;
}