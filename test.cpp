#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    int i = year % 4;
    switch (i)
    {
    case 0:
        printf("Year %d is a leap year.", year);
        break;

    default:
        printf("Year %d is not a leap year.", year);
        break;
    }

    return 0;
}
