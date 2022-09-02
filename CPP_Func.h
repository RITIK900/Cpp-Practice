#include <cmath>
#include<iostream>
#define PI 3.14;
using namespace std;

bool checkPrime(int);
int highestValueDigit(int);
int power(int, int);
void pascalTriangle(int);
bool checkInFibonaccai(int);
void swap(int&,int&);
// Function Overloading for adding 2 or 3 values
int add(int,int);
int add(int,int,int);
// Function Overloading for calculate the area of circle, rectangle or triangle
float area(int); // Area of circle
int area(int, int); // Area of rectangle
float area(float,float); // Area of triangle

bool checkPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int highestValueDigit(int n)
{
    int max = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit > max)
            max = digit;
        n = n / 10;
    }

    return max;
}

int power(int x, int y)
{
    int p = 1;
    for (int i = 1; i <= y; i++)
        p *= x;

    return p;
}

void pascalTriangle(int n)
{
    // cout << "Code to print pascal Triangle.";
}

bool checkInFibonaccai(int n)
{
    if (n == 0 || n == 1)
        return true;

    int a = 0, b = 1;
    while (1)
    {
        int temp = b;
        b = a + b;
        a = temp;
        cout << b <<" ";
        if (b == n)
            return true;
        if (b > n)
            return false;
    }
    return false;
}

void swap(int &a, int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}

int add(int a,int b)
{
    return a+b;
}

int add(int a,int b,int c)
{
    return a+b+c;
}

// Function Overloading for calculate the area of circle, rectangle or triangle
float area(int r) // Area of circle
{
    return PI*r*r;
}

int area(int l, int b) // Area of rectangle
{
    return l*b;
}

float area(float base,float height) // Area of triangle
{
    return 0.5*base*height;
}