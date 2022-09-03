#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(/* args */);
    void setData(int a, int b)
    {
        real = a;
        img = b;
    }
    void display()
    {
        cout<<real<<" + i"<<img;
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
    Complex c1,c2;
    c1.setData(1,2);
    c1.display();
    return 0;
}