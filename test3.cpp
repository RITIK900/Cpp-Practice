#include <stdio.h>
#include "myfunctions.h"

int main()
{
    int n;
    printf("Enter the size of the Array : ");
    scanf("%d",&n);
    int a[n];
    inputArray(a, n);

    printf("%d", maxInArray(a,n));
    return 0;
}