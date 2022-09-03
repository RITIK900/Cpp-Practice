#include<iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(/* args */);
    setTime(int h, int m,int s)
    {
        
    }
    ~Time();
};

Time::Time(/* args */)
{
}

Time::~Time()
{
}


int main()
{
    Time c1,c2;
    c1.setTime(10,20,20);
    c1.display();
    return 0;
}