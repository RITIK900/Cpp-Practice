#include <iostream>
#include <cmath>

using namespace std;

class ReverseNumber
{
private:
    int num, revNum = 0;

public:
    void setNum(int x)
    {
        num = x;
        while (x > 0)
        {
            revNum = revNum * 10 + x % 10;
            x = x / 10;
        }
    }
    int getReverse()
    {
        return revNum;
    }
};

int main()
{
    ReverseNumber r;
    r.setNum(123);
    cout << "The reverse of the number is " << r.getReverse() << ".";
    return 0;
}