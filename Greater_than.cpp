#include<iostream>

using namespace std;

class Time
{
private:
    /* data */
    int hour;
    int min;

public:
    Time(/* args */);
    Time(int h, int m)
    {
        hour = h;
        min =m;
    }

    void display()
    {
        cout<<hour<<" Hour "<<min<< " min"<<endl;
    }

    bool operator>(Time t)
    {
        if(hour > t.hour)
         return true;
        else if(hour == t.hour)
         if(min > t.min)
          return true;
        
        return false;
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
    Time t1(11,30);
    Time t2(10,30);

    t1.display();
    t2.display();

    if(t1>t2)
    {
        cout<<"iffffff"<<endl;
    }
    else
     cout<<"elseeee"<<endl;
    return 0;
}