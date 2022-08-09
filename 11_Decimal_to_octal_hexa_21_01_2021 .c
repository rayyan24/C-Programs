#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number to convert to octal and hexadecimal\n");
    scanf("%d", &a);
    printf("In Octal %d is %o\n", a, a);
    printf("In Hexadecimal %d is %x\n", a, a);


    return 0;
}
