#include <iostream>
using namespace std;

class Bill
{
private:
    string name;
    string billNo;
    int unit;

public:
    void get(string n, string b, float u)
    {
        name = n;
        billNo = b;
        unit = u;
    }
    void allDetail()
    {
        cout << "Bill Number : " << billNo << " | Name : " << name << " | Units : " << unit << endl;
    }
    float calculateBill()
    {
        int t = unit;
        float amount = 0.0;
        if (t <= 100)
        {
            return 1.20 * unit;
        }
        else
        {
            amount = 100 * 1.20;
            t = t - 100;
            if (t <= 100)
            {
                amount += t * 2;
                return amount;
            }
            else
            {
                amount += 100 * 2;
                t = t - 100;
                if (t <= 100)
                {
                    amount += t * 3;
                    return amount;
                }
            }
        }
    }
};

int main()
{
    Bill customer;
    customer.get("Rona Tim", "BN0006", 99);

    cout << "\t\t __________Bill__________\n";
    customer.allDetail();
    cout << "\t\tTotal amount : " << customer.calculateBill();

    return 0;
}