#include <math.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

int maxSalary(struct Employee*, int );
void displayEmployee(struct Employee);
int square(int);
void fibonacciTillN(int);
void allPrimeInBetween(int, int);
void print_N_Prime(int);
int nextPrime(int);
void printArrayWithFreqency(int *, int);
void mergeArray(int *, int, int *, int, int *);
void printUnique(int *, int);
void fillArray(int *, int, int);
int countDuplicates(int *, int);
void checkAdjacentDuplicates(int *, int);
void rotateArray(int *, int, int, int);
void swap(int *, int *);
void sortArray(int *, int);
int minInArray(int *, int);
int maxInArray(int *, int);
int checkPrime(int);
int checkArmStrong(int);
int digitSum(int);
int HCF(int, int);
void inputArray(int *, int);
void displayArray(int *, int);
void sumOfAllElements(int *, int);
void printReverse(int *, int);

int maxSalary(struct Employee *e, int n)
{
    int max = 0 ;
    for (int i = 0; i < n; i++)
    {
        if (max < e[i].salary)
            max = e[i].salary;
    }

    return max; 
}

void displayEmployee(struct Employee e)
{
    printf("\nYou Entered : Employee id -> %d | Employee name : %s | Employee salary : %f", e.id, e.name, e.salary);
}

int square(int n)
{
    return n * n;
}

void fibonacciTillN(int n)
{
    int a = 0, b = 1;

    if (n == 1)
    {
        printf("%d", a);
        return;
    }
    if (n == 2)
    {
        printf("%d %d", a, b);
        return;
    }
    printf("%d %d ", a, b);
    for (int i = 3; i <= n; i++)
    {
        int temp = b;
        b = a + b;
        a = temp;
        printf("%d ", b);
    }
}

void allPrimeInBetween(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (checkPrime(i))
            printf("%d ", i);
    }
}

void print_N_Prime(int n)
{
    int k = 0;
    for (int i = 1; k < n; i++)
    {
        if (checkPrime(i))
        {
            printf("%d ", i);
            k++;
        }
    }
}

int nextPrime(int n)
{
    int i = n + 1;
    while (i)
    {
        if (checkPrime(i))
            return i;
        i++;
    }
    return 0;
}

void printArrayWithFreqency(int *a, int size)
{
    int max = maxInArray(a, size);
    int ar[max + 1];
    fillArray(ar, max + 1, 0);

    for (int i = 0; i < size; i++)
        ar[a[i]]++;

    for (int i = 0; i <= max; i++)
        if (ar[i] > 0)
            printf("Element -> %d, Frequency -> %d \n", i, ar[i]);
}

void mergeArray(int *a, int size_a, int *b, int size_b, int *c)
{
    int i = 0, j = 0, k = 0;
    while (i < size_a && j < size_b)
    {
        if (a[i] > b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < size_a)
        c[k++] = a[i++];

    while (j < size_b)
        c[k++] = b[j++];
}

void printUnique(int *a, int size)
{
    int max = maxInArray(a, size), count = 0;
    int ar[max + 1];
    fillArray(ar, max + 1, 0);

    for (int i = 0; i < size; i++)
        ar[a[i]]++;

    for (int i = 0; i <= max; i++)
        if (ar[i] == 1)
            printf("%d ", i);
}

void fillArray(int *a, int size, int k)
{
    for (int i = 0; i < size; i++)
        a[i] = k;
}

int countDuplicates(int *a, int size)
{
    int max = maxInArray(a, size), count = 0;
    int ar[max + 1];
    fillArray(ar, max + 1, 0);

    for (int i = 0; i < size; i++)
        ar[a[i]]++;

    for (int i = 0; i <= max; i++)
        if (ar[i] > 1)
            count++;

    return count;
}

void checkAdjacentDuplicates(int *a, int size)
{
    for (int i = 0; i < size - 1; i++)
        if (a[i] == a[i + 1])
        {
            printf("First Occurance of Adjacent Duplicates is %d.", a[i]);
            return;
        }
    printf("There is no adjacent duplicates in given Array,");
}

void rotateArray(int *a, int size, int n /*Number of rotation.*/, char direction /* For left -> l and For right -> r.*/)
{
    if (direction == 'l')
    {
        for (int i = 1; i <= n; i++)
        {
            int temp = a[0];
            for (int j = 1; j < size; j++)
                a[j - 1] = a[j];
            a[size - 1] = temp;
        }

        return;
    }

    else if (direction == 'r')
    {
        for (int i = 1; i <= n; i++)
        {
            int temp = a[size - 1];
            for (int j = size - 2; j >= 0; j--)
                a[j + 1] = a[j];
            a[0] = temp;
        }

        return;
    }

    printf("You Entered '%c' direction, Please give direction like below : \n-> Press 'r' for right rotation.\n-> Press 'l' for left rotation.", direction);
}

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

void sortArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (a[i] < a[j])
            {
                int t;
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

int minInArray(int *arr, int size)
{
    int min = 10000000;
    for (int i = 0; i < size; i++)
        if (min > arr[i])
            min = arr[i];

    return min;
}

int maxInArray(int *arr, int size)
{
    int max = -1;
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