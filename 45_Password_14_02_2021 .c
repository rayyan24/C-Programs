// #include <stdio.h>
// int main()
// {
//     char s[1000], r[1000];
//     int j, k, i = 0, pal,len;

//     printf("Input a string\n");
//     gets(s);
//     for (i = 0; s[i] != '\0'; i++)
//         ;
//     k = i - 1;
//     i=len;
//     for (j = 0; j < i; j++)
//     {
//         r[j] = s[k];
//         k--;
//     }

//     r[j] = '\0';

//     // printf("%s\n", r);
//     for (i = 0; i < len; i++)
//     {
//         if (r[i] != s[i])
//         {
//             pal = 0;
//         }
//     }
//     if (pal = 0)
//     {
//         printf("No");
//     }
//     else
//     {
//         printf("Yes");
//     }
//     return 0;
// }
#include <stdio.h>
// #include <string.h>
 
void main()
{
    char string[25], reverse_string[25] = {'\0'};
    int i, length = 0, flag = 0;
 
   printf("Enter a string \n");
    gets(string);
    /*  keep going through each character of the string till its end */
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    for (i = length - 1; i >= 0 ; i--)
    {
        reverse_string[length - i - 1] = string[i];
    }
   /*  Check if the string is a Palindrome */
 
    for (flag = 1, i = 0; i < length ; i++)
    {
        if (reverse_string[i] != string[i])
            flag = 0;
    }
    if (flag == 1)
       printf ("%s is a palindrome \n", string);
    else
       printf("%s is not a palindrome \n", string);
}