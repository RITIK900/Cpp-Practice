#include <iostream>
#define PI 3.14
using namespace std;

class Area
{
public:
    float area(float r)
    {
        return PI * r * r;
    }
    int area(int l, int b)
    {
        return l * b;
    }
};

int main()
{
    Area a;
    cout << "The area of the circle is " << a.area(3.0) << ".\n";
    cout << "The area of the square is " << a.area(3, 3) << ".\n";
    cout << "The area of the rectangle is " << a.area(3, 4) << ".\n";
    return 0;
}