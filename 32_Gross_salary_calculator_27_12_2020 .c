#include <stdio.h>
int main()
{
    float basic_salary, d_allowance, house_rent, final_salary;
    printf("Enter Basic Salary\n");
    scanf("%f", &basic_salary);
    d_allowance = 0.4 * basic_salary;
    house_rent = 0.2 * basic_salary;
    final_salary = basic_salary + d_allowance + house_rent;
    printf("Gross Salary: %f", final_salary);
    return 0;
}
