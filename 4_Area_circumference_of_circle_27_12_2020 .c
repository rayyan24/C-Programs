#include <stdio.h>
int main()
{
    float radius, area, circumference;
    printf("Enter radius of circle\n");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area of circle with radius %f  is %f\n", radius, area);
    printf("Circumference of circle with radius %f is %f\n", radius, circumference);
    return 0;
}