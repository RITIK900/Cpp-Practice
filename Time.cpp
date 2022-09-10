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
    void showTime()
    {
        cout << hours << " hours " << minutes << " min " << seconds << " sec" << endl;
    }
    void normalize()
    {
        minutes = minutes + seconds / 60;
        seconds = seconds % 60;
        hours = hours + minutes / 60;
        minutes = minutes % 60;
    }
    Time addTime(Time t)
    {
        Time temp;
        temp.hours = t.hours + hours;
        temp.minutes = t.minutes + minutes;
        temp.seconds = t.seconds + seconds;
        return temp;
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
    Time c1, c2, c3;
    c1.setTime(3, 45, 20);
    c1.normalize();
    c1.showTime();

    c2.setTime(3, 60, 60);
    c2.normalize();
    c2.showTime();

    c3 = c1.addTime(c2);
    c3.normalize();
    c3.showTime();
    return 0;
}