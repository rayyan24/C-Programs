//  * * * * *
//  * * * *
//  * * *
//  * *
//  *

// #include <stdio.h>
// int main()
// {
//     int row, column, n = 5;
//     for (row = n; row >= 1; row--)
//     {
//         for (column = 1; column <= row; column++)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//  *
//  * *
//  * * *
//  * * * *
//  * * * * *

// #include <stdio.h>
// int main()
// {
//     int row, column, n;
//     printf("Enter the number of rows: ");
//     scanf("%d",&n);
//     for (row = 1; row <= n; row++)
//     {
//         for (column = 1; column <= row; column++)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
//     return 0;
// }
//  1
//  2  2
//  3  3  3
//  4  4  4  4
//  5  5  5  5  5

// #include <stdio.h>
// int main()
// {
//     int row, column, n = 5;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (row = 1; row <= n; row++)
//     {
//         for (column = 1; column <= row; column++)
//         {
//             printf(" %d ", row - 1);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//  1
//  1  2
//  1  2  3
//  1  2  3  4
//  1  2  3  4  5

// #include<stdio.h>
// int main()
// {
//     int row,column,n=5;
//     for(row=1;row<=n;row++)
//     {
//         for ( column = 1; column <=row; column++)
//         {
//             printf(" %d ",column);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1
// #include<stdio.h>
// int main()
// {
//     int n=5,row,column;
//     for ( row = 1; row <=n; row++)
//     {
//         for ( column = 1; column <= row; column++)
//         {
//             printf("%d ",row);
//         }
//         printf("\n");
//     }
//     for(row=n-1;row>=1;row--)
//     {
//         for ( column = 1; column <=row; column++)
//         {
//             printf("%d ",row);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// #include <stdio.h>
// int main()
// {
//     int n = 5, row, column;
//     for (row = 1; row <= n; row++)
//     {
//         for (column = 1; column <= row; column++)
//         {
//             printf("%d ", column);
//         }
//         printf("\n");
//     }
//     for (row = n - 1; row >= 1; row--)
//     {
//         for (column = 1; column <= row; column++)
//         {
//             printf("%d ", column);
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int row, column, n = 5, num = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf(" %d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
