#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    int age;

public:
    Student(string n, int r, int a)
    {
        name = n;
        rollNo = r;
        age = a;
    }
    void showInfo()
    {
        cout << "Roll number : " << rollNo << ", Name : " << name << ", Age : " << age << endl;
    }
};

int main()
{
    Student s("Rom som", 12, 17);
    s.showInfo();

    return 0;
}