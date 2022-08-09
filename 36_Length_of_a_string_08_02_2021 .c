#include<stdio.h>
int main()
{
    char a[20];
    int i;
    printf("Enter a string: ");
    scanf("%[^\n]%*c",a);
    for(i=0;a[i]!=0;i++);
    printf("length  of string = %d\n",i);
    return 0;
}