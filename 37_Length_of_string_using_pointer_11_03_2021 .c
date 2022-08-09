#include<stdio.h>
int s_len(char*a);
int main()
{
    char a[100];
    printf("Enter the string: ");
    gets(a);
    s_len(a);
    return 0;
}
int s_len(char*a)
{
    int i;
    for ( i = 0; a[i] !='\0'; i++);
    printf("length of string = %d",i);
}