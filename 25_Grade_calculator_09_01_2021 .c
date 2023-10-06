#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, percentage;
    printf("Enter marks of subject 1\n");
    scanf("%d", &m1);
    printf("Enter marks of subject 2\n");
    scanf("%d", &m2);
    printf("Enter marks of subject 3\n");
    scanf("%d", &m3);
    printf("Enter marks of subject 4\n");
    scanf("%d", &m4);
    printf("Enter marks of subject 5\n");
    scanf("%d", &m5);
    percentage = (m1 + m2 + m3 + m4 + m5) * 100 / 500;
    if (percentage <= 40)
    {
        printf("Fail");
    }
    else if (percentage > 40 && percentage < 60)
    {
        printf("Third");
    }
    else if (percentage > 50 && percentage < 70)
    {
        printf("Second");
    }
    else if (percentage >= 70)
    {
        printf("First");
    }

    return 0;
}