#include <iostream>
using namespace std;

class Bank
{
    int amount;

public:
    void setDimensions(int x, int y, int z)
    {
        length = x;
        breadth = y;
        height = z;
    }

    int readPrinciple()
    {
        return amount;
    }
};

int main()
{
    Box b;
    b.setDimensions(3, 4, 4);
    cout << "The area of the Box is " << b.volume() << ".";
    return 0;
}