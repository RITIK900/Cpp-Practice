#include<iostream>
using namespace std;
class person
{
    int age;
    int rank;

public:
    int getAge()
    {
        return age;
    }
    int getRank()
    {
        return rank;
    }
    person(int a , int r)
    {
        cout<<"Parameter constructor called"<<endl;
        cout<<"Parameter constructor end"<<endl;
        age = a;
        rank = r;
    }
    person(const person &p)
    {
        cout<<"Copy constructor called"<<endl;
        age = p.age;
        rank = p.rank;
        cout<<"Copy constructor end"<<endl;
    }
    person()
    {
        cout<<"Default constructor called"<<endl;
        cout<<"Default constructor end"<<endl;

    }
   person operator+(person p)
    {
    cout<<"Operator + called"<<endl;

      person temp;
      temp.age = age + p.age;
      temp.rank = rank + p.rank;
    cout<<"Operator + end"<<endl;
      return temp;
    }

  person operator++() //Pre Increment
    {
       person temp;
       temp.rank = ++rank;
       temp.age = ++age;
       return temp;
    }
   person operator++(int useless) //Post Increment
    {
       person temp;
       temp.rank = rank++;
       temp.age = age++;
       return temp;
    }
    void display()
    {
     cout<<"Person age "<<age<<" and Rank "<<rank<<endl;
    }
   friend ostream& operator<<(ostream &os, person p);
};
ostream& operator<<(ostream &os , person p)
{
 os<<"Operator called"<<endl;
 os<<"Person age "<<p.age<<" and Rank "<<p.rank<<endl;
 os<<"Operator end"<<endl;
 return os;
}

int main()
{
    person p1(20,23);
    cout<<endl;
    person p2 = p1;
    cout<<endl;
    person p3 = p1+ p2;
    cout<<endl;
    person p4;
    p4(34, 54);
    cout<<p4;
    cout<<endl;

    (++p3).display();
    cout<<endl;
    (p3++).display();
    cout<<endl;
     p3.display();
     cout<<endl;

    cout<<p3<<p1;
    cout<<endl;


    cout<<"Prateek age "<<p1.getAge()<<" and Rank "<<p1.getRank()<<endl;
    cout<<"Jatin age "<<p2.getAge()<<endl;
    cout<<"Utkarsh age "<<p3.getAge()<<" and Rank "<<p3.getRank()<<endl;


}

