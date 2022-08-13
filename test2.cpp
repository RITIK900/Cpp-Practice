#include <iostream>

using namespace std;

class test2
{
public:
      void printD()
    {
        cout << "I am in base class.";
    }
};

class derieved : public test2
{
public:
   /*  void printD()
    {
        cout << "I am in derieved class.";
    }*/
};

int main()
{
    
  //  derieved *a = new derieved();
  
  //  a->printD();
  derieved a;
  a.printD();
    return 0;
}