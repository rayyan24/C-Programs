#include <stdio.h>
int main()
{
    char alphabet;
    printf("Enter the character: ");
    scanf("%c", &alphabet);
    if (alphabet >= 'a' && alphabet <= 'z')
    {
        printf("%c is a lower case letter", alphabet);
    }
    else if (alphabet >= 'A' && alphabet <= 'Z')
    {
        printf("%c is an UPPER case letter", alphabet);
    }
    else if (alphabet >= 1 && alphabet >= 9)
    {
        printf("entererd character is a number", alphabet);
    }
    else
    {
        printf("%c is a special character", alphabet);
    }
    return 0;
}