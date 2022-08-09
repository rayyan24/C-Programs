#include<stdio.h>
int main()
{
    char a[20],str[20];
    // fgets(a,20,stdin);
    scanf("%[^\n]%*c",a);
    printf("%s",a);
    return 0;
}