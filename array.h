void inputArray(int*, int);
void displayArray(int*, int);
int sumOfAllElements(int*, int);
int maxInArray(int*, int);
int minInArray(int*, int);
void sortArray(int*, int);
void displayReverse(int*,int);

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

int sumOfAllElements(int *a, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += *(i + a);

    return sum;
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

void displayReverse(int* a,int size)
{
    for (int i = size-1; i >=0; i--)
        printf("%d ", *(i + a));
}

void copyAInB(int* a, int* b, int size)
{
    for(int i=0;i<size;i++)
     b[i] = a[i];
}