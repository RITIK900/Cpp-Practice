#include<iostream>
using namespace std;

class Distance
{
private:
    /* data */
    int feet ;
    int inches;
public:
    Distance(/* args */);

    Distance(int f, int i)
    {
        feet=f;
        inches=i;
    }

    Distance operator()(int a, int b, int c)
    {
        Distance d;
        d.feet = a+c+5;
        d.inches = a+b+15;
        return d;
    }

    void display()
    {
        cout<<" Feet = "<<feet<<" Inches = "<<inches<<endl;
    }


    ~Distance();
};

Distance::Distance(/* args */)
{
}

Distance::~Distance()
{
}

int main()
{
    Distance d1(5,10);
    Distance d2;

    d1.display();
    d2=d1(10,20,30);
    d2.display();

    return 0;
}