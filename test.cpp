#include <iostream>
using namespace std;

class Complex
{
private:
    /* data */
    int real;
    int img;
public:
    Complex(/* args */);

    Complex(int a, int b)
    {
        real=a;img=b;
    }

    void display()
    {
        cout<<real<<" + i"<<img;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real= real+c.real;
        temp.img= img+c.img;
        return temp;
    }

    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real= real-c.real;
        temp.img= img-c.img;
        return temp;
    }

    Complex operator*(Complex c)
    {
        Complex temp;
        temp.real= real*c.real;
        temp.img= img*c.img;
        return temp;
    }

    bool operator==(Complex c)
    {
        if(real == c.real && img == c.img)
         return true;

        return false;
    }

    friend 

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
    Complex c1(1,2);
    Complex c2(3,4);

    cout<<c1*c2;
    cout<<(c1==c2);

    return 0;
}