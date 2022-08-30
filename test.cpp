#include <stdio.h>
#include "array.h"

int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter the %d elements : ", n);
    inputArray(a, n);

    copyAInB(a, b, n);
    printf("Display b Array : ");
    displayArray(b, n);
    return 0;
}