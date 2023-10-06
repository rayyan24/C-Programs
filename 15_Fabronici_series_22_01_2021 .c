// #include <stdio.h>
// int main()
// {
//     int i, n,t1 = 0, t2 = 1, t3;
//     printf("Enter a Number");
//     scanf("%d",&n);
//     for (i = 1; i <= n; i++)
//     {
//         printf("%d, ", t1);
//         t3 = t1 + t2;
//         t1 = t2;
//         t2 = t3;
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    int n, i, t1 = -1, t2 = 1, t3;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        t3 = t1 + t2;
        printf("%d\n", t3);
        t1 = t2;
        t2 = t3;
    }
    return 0;
}
