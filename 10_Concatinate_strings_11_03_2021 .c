#include<stdio.h>
int main()
{
    char a[10]="hello"; char b[10]="world"; char c[20];
    int i,j;
    for(i=0;a[i]!='\0';i++)
    {
        c[i]=a[i];
    }
        c[i++]=' ';
    for(j=0;b[j]!='\0';j++)
    {
        c[j]=b[j];
        c[j]='\0';
    }
    printf("%s",c);
    
    return 0;
}