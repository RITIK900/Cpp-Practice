#include <iostream>
using namespace std;

class Complex
{
private:
    int a;
    int b;

public:
    Complex(/* args */);
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << a << " + i" << b;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
    void addTwo(Complex c1, Complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    ~Complex();
};

Complex::Complex(/* args */)
{
}

Complex::~Complex()
{
}

int main()
{
    Complex c1, c2, c3, c4;
    c1.setData(1, 2);
    c2.setData(3, 4);
    cout << "The complex-1 data is ";
    c1.showData();
    cout << endl;
    cout << "The complex-2 data is ";
    c2.showData();
    cout << endl;
    cout << "Method-1 of adding : \n";
    cout << "The sum of complex-1 and complex-2 is ";
    c3 = c1.add(c2);
    c3.showData();
    cout << endl;

    cout << "Method-2 of adding : \n";
    cout << "The sum of complex-1 and complex-2 is ";
    c4.addTwo(c1, c2);
    c4.showData();
    cout << endl;

    return 0;
}