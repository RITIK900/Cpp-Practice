#include <stdio.h>
#include "myfunctions.h"

int main()
{
    struct Employee e[10];

    // Take input
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the Employee-%d id : ", i);
        scanf("%d", &e[i].id);
        printf("Enter the Employee-%d name : ", i);
        scanf("%s", &e[i].name);
        printf("Enter the Employee-%d salary : ", i);
        scanf("%f", &e[i].salary);
    }

    // Maximum Salary
    printf("Maximum Salary of the Employee is %d.", maxSalary(e, 10));

    return 0;
}