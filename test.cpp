#include <stdio.h>
#include "myfunctions.h"

int main()
{
    struct Employee e[2];

    // Take input
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the Employee-%d id : ", i+1);
        scanf("%d", &e[i].id);
        printf("Enter the Employee-%d name : ", i+1);
        scanf("%s", &e[i].name);
        printf("Enter the Employee-%d salary : ", i+1);
        scanf("%f", &e[i].salary);
    }

    sortBySalary(e,3);
    
    printf("\n******Sort By Salary******\n");
    printStructArray(e,2);

    return 0;
}