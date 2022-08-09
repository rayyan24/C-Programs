// #include<stdio.h>
// # define add(a,b) a+b
// int main()
// {
//     printf("%d\n",add(2,3));
//     return 0;
// }
// #define SQUARE(n) (n * n)
// #include <stdio.h>
// int main()
// {

//     int j;

//     j = 64 / SQUARE(4);
//     printf("j = %d", j);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int sub[50], i;
//     for (i = 0; i <= 48; i++)
//         ;
//     {
//         sub[i] = i;
//         printf("\n%d", sub[i]);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int array[26], i;
//     for (i = 0; i <= 25; i++)
//     {
//         array[i] = 'A' + i;
//         printf("\n%d %c", array[i], array[i]);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int num[26], temp;
//     num[0] = 100;
//     num[25] = 200;
//     temp = num[25];
//     num[25] = num[0];
//     num[0] = temp;
//     printf("\n%d %d", num[0], num[25]);

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i, a = 2, b = 3;
//     int arr[2 + 3];
//     for (i = 0; i < a + b; i++)
//     {
//         scanf("%d", &arr[i]);
//         printf("%d\n", arr[i]);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int size;
//     scanf("%d", &size);
//     int arr[size];
//     for (i = 1; i <= size; i++)
//     {
//         scanf("%d", arr[i]);
//         printf("%d", arr[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// #define MULT(X, Y) X *Y;
// int main()
// {
//     int num = 0;
//     do
//     {
//         --num;
//         printf("%d", num);
//         num++;
//     } while (num >= 0);
// }
// void show(int *);
// void main()
// {
// int a=10;

// show(&a);
// printf("Value of a = %d", a);
// }

// void show(int *x)
// {
// *x = *x + 10;
// }
// int main()
// {
//     enum days
//     {
//         MON = -1,
//         TUE,
//         WED = 6,
//         THU,
//         FRI,
//         SAT
//     };
//     printf("%d, %d, %d, %d, %d, %d\n", MON, TUE, WED, THU, FRI, SAT);
//     return 0;
// }
// void fun1()
// {
//     static int count = 0;
//     printf("count = % d\n", count++);
// }
// void main()
// {
//     int i;
//     // clrscr();
//     for (i = 1; i <= 5; i++)
//         fun1();

//     // getch();
// }
int main()
{
char p[] = "NEW DELHI";
int i=0; while(p[i] != '\0')
{
printf("%c", *(p+i)); i++;
}
}
