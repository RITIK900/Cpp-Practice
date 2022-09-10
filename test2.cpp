#include <iostream>
using namespace std;

class Rectangle
{
    int len, breadth;
    int count = 0;

public:
    void setDimensions(int x, int y)
    {
        len = x;
        breadth = y;
    }

    int area()
    {
        count++;
        return len * breadth;
    }
};

int main()
{
    Rectangle s;
    s.setDimensions(3, 4);
    s.area();
    cout << "The area of the rectangle is " << s.area() << ".";
    return 0;
}