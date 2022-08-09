#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    int i;
    printf("Enter string 1: ");
    gets(a);
    printf("Enter string 2: ");
    gets(b);
    i=strcmp(a,b);
    // printf("%d\n",i);
    if (i==0)
    {
        printf("equal");
    }
    else if (i<0)
    {
        printf("a greater than b");
    }
    else if (i>0)
    {
        printf("b greater than a");
    }
    
    return 0;
}
