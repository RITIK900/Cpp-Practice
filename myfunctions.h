int checkPrime(int);
int checkArmStrong(int);
#include <math.h>

int maxInArray(int *, int);
int digitSum(int);
int HCF(int, int);
void inputArray(int *, int);
void displayArray(int *, int);
void sumOfAllElements(int *, int);
void printReverse(int *, int);

int maxInArray(int *arr, int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
        if (max < arr[i])
            max = arr[i];

    return max;
}

int checkPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int checkArmStrong(int n)
{
    int digitSum = 0, t = n;
    while (t)
    {
        digitSum += (t % 10) * (t % 10) * (t % 10);
        t = t / 10;
    }
    if (digitSum == n)
        return 1;
    else
        return 0;
}

int digitSum(int t)
{
    int sum = 0;
    while (t)
    {
        sum += t % 10;
        t = t / 10;
    }

    return sum;
}

int HCF(int a, int b)
{
    if (a == 1 || b == 1)
        return 1;

    if (a > b)
        return HCF(a - b, b);
    if (a < b)
        return HCF(a, b - a);

    return a;
}

void inputArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", (i + a));
}

void displayArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", *(i + a));
}

void sumOfAllElements(int *a, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += *(i + a);

    printf("Sum of All Elements = %d", sum);
}

void printReverse(int *a, int size)
{
    for (int i = size - 1; i >= 0; i--)
        printf("%d ", *(i + a));
}