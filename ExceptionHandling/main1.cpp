#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    int result;

    try{
        if(b==0)
         throw "Divide by 0 error!!!";
        if(b==1)
         throw "Divide by 1, mat karo!!!";
        result = a/b;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }

    cout<<"Result : "<<result;

    return 0;
}