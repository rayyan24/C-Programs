#include <stdio.h>
#include <stdlib.h>
int main()
{
    // general
    int n;
    // password
    char pass[20];
    int i;
    // no of char
    int j;
    char str[30];
    // copy string
    char str1[100], str2[100];
    // reverse string
    char s[1000], r[1000];
    int k; // j declared above i inside elif
    // palindrome
    char string[25], reverse_string[25] = {'\0'};
    int length = 0, flag = 0;

    printf("Program for String Functions\n");

    printf(" Enter 1 for password \n Enter 2  for number of characters \n Enter 3 for string copy \n Enter 4 for string reverse \n Enter 5 for palindrome check \n Enter 6 for string concatination \n Enter 7 for string comparision \n Enter 8 for exit \n");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("Enter Your password: ");
        for (i = 0; i < 20; i++)
        {

            pass[i] = getch();
            printf("*");
            if (pass[i] == '\r')
            {
                break;
            }
        }
    }

    else if (n == 2)
    {
        fflush(stdin);
        printf("Enter Your String: ");
        gets(str);
        for (i = 0; str[i] != '\0'; i++)
            ;
        printf("length of string = %d", i);
    }

    else if (n == 3)
    {
        fflush(stdin);
        // printf("string copy");
        printf("Enter string : ");
        gets(str1);

        for (i = 0; str1[i] != '\0'; ++i)
        {
            str2[i] = str1[i];
        }

        str2[i] = '\0';
        printf("String s2: %s", str2);
    }

    else if (n == 4)
    {
        fflush(stdin);
        i = 0;
        printf("Input a string\n");
        gets(s);
        for (i = 0; s[i] != '\0'; i++)
            ;
        k = i - 1;

        for (j = 0; j < i; j++)
        {
            r[j] = s[k];
            k--;
        }

        r[j] = '\0';

        printf("%s\n", r);
    }

    else if (n == 5)
    {
        fflush(stdin);
        // printf("palindrome check");
        printf("Enter a string \n");
        gets(string);
        /*  keep going through each character of the string till its end */
        for (i = 0; string[i] != '\0'; i++)
        {
            length++;
        }
        for (i = length - 1; i >= 0; i--)
        {
            reverse_string[length - i - 1] = string[i];
        }
        /*  Check if the string is a Palindrome */

        for (flag = 1, i = 0; i < length; i++)
        {
            if (reverse_string[i] != string[i])
                flag = 0;
        }
        if (flag == 1)
            printf("%s is a palindrome \n", string);
        else
            printf("%s is not a palindrome \n", string);
    }

    else if (n == 6)
    {
        fflush(stdin);
        char str1[50], str2[50], i, j;
        printf("\nEnter first string: ");
        scanf("%s", str1);
        printf("\nEnter second string: ");
        scanf("%s", str2);

        for (i = 0; str1[i] != '\0'; ++i)
            ;
        for (j = 0; str2[j] != '\0'; ++j, ++i)
        {
            str1[i] = str2[j];
        }
        str1[i] = '\0';
        printf("\nOutput: %s", str1);
    }

    else if (n == 7)
    {
        // printf("string comparision");
        char str1[20]; // declaration of char array
        char str2[20]; // declaration of char array
        int value;     // declaration of integer variable
        printf("Enter the first string : ");
        scanf("%s", str1);
        printf("Enter the second string : ");
        scanf("%s", str2);
        // comparing both the strings using strcmp() function
        value = strcmp(str1, str2);
        if (value == 0)
            printf("strings are same");
        else
            printf("strings are not same");
    }

    else if (n == 8)
    {
        exit(0);
    }

    return 0;
}