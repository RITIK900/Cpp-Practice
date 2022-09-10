#include <iostream>
using namespace std;

#define PI 3.14
float area(float r)
{
    return PI*r*r;
}
int area(int l,int b)
{
    return l*b;
}
float area(float base, float height)
{
    return 0.5*base*height;
}


int main()
{
    cout<<"Area of the circle is "<<area(1)<<endl;
    cout<<"Area of the Rectangle is "<<area(2,3)<<endl;
    cout<<"Area of the Triangle is "<<area(2.0,3.0)<<endl;

    return 0;
}