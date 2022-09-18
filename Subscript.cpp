#include<iostream>
using namespace std;

class Array
{
private:
    /* data */
    int a[100];
    const int size=100;
public:
    Array(/* args */);

    void setArray(int index, int n)
    {
        if(index >= size || index<0)
        {
            cout<<"Array index out of bound"<<endl;
            //return index;
            exit(0);
        }
        a[index]=n;
    }

    void display(int index)
    {
        cout<<a[index]<<endl;
    }

    int operator[](int index)
    {
        if(index >= size || index<0)
        {
            cout<<"Array index out of bound"<<endl;
            //return index;
            exit(0);
        }
        return a[index];
    }

    ~Array();
};

Array::Array(/* args */)
{
}

Array::~Array()
{
}

int main()
{
    Array b;
    b.setArray(5,10);
    b.display(5);

    //b[20] = 30;

    cout<<b[5];
    return 0;
}