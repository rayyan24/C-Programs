// A
// B B
// C C C
// D D D D
// E E E E E

// #include<stdio.h>
// int main()
// {
//     int n=5;
//     char row,column;
//     for ( row = 'A'; row <='E'; row++)
//     {
//        for ( column = 'A'; column <= row; column++)
//        {
//            printf("%c ",row);
//        }
//        printf("\n");
//     }

//     return 0;
// }

// A
// A B
// A B C
// A B C D
// A B C D E

#include <stdio.h>
int main()
{
    int n;
    char row, column;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (row = 'A'; row <= 'Z'; row++)
    {
        if (row == 65 + n)
        {
            break;
        }
        for (column = 'A'; column <= row; column++)
        {
            printf("%c ", column);
        }
        printf("\n");
    }

    return 0;
}

// A B C D E
// A B C D
// A B C
// A B
// A

// #include <stdio.h>
// int main()
// {
//     int n = 5;
//     char row, column;
//     for (row = 'E'; row >= 'A'; row--)
//     {
//         for (column = 'A'; column <= row; column++)
//         {
//             printf("%c ", column);
//         }
//         printf("\n");
//     }

//     return 0;
// }