#include <stdio.h>

void swap(int &x, int &y)
{
    int t;


    t = x;
    x = y;
    y = t;
}

int main()
{
    int a, b;
    printf("Enter the two numbers : ");
    scanf("%d %d", &a, &b);
    swap(a, b);
    printf("a = %d, b = %d", a, b);
    return 0;
}