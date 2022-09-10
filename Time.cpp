#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(/* args */);
    void setTime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display()
    {
        cout << hours << " hours " << minutes << " min " << seconds << " sec" << endl;
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
    Time c1, c2;
    c1.setTime(3, 45, 20);
    c1.display();
    return 0;
}