#include<iostream>
#include<cstring>
using namespace std;

class myString
{
private:
    /* data */
    char *a;
    int size;
public:
    myString(/* args */);

    myString(char *str)
    {
        cout<<"Parameterized Constructor called"<<endl;
        size=strlen(str);
        a=(char*)malloc(size+1);
        strcpy(a, str);
    }
    
    myString(const myString &s)
    {
        cout<<"Copy Constructor called"<<endl;
        size=strlen(s.a);
        a=(char*)malloc(size+1);
        strcpy(a, s.a);
    }

    myString operator=(const myString &s)
    {
        cout<<"Assignment Operator called"<<endl;
        if(a==s.a)
        {
            return s.a;
        }
        free(a); //To free existing location ---> To avoid Memory Leak
        size=strlen(s.a);
        a=(char*)malloc(size+1);
        strcpy(a, s.a);
        return *this;
    }

    void display()
    {
        cout<<a<<endl;
    }

    void change(char *str)
    {
        size=strlen(str);
        free(a);
        a=(char*)malloc(size+1);
        strcpy(a, str);
    }
};

myString::myString(/* args */)
{
     cout<<"Default Constructor"<<endl;
        a=(char*)malloc(1);
        size=1;
}

int main()
{
    myString s1("Ritik");
    myString  s2=s1;
    myString  s3;
    myString  s4("Memo");
    myString  s5;
    s3=s1;
    s4=s1;

    s5=s4=s1;

    s1.change("ppp");
    s1=s1;
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();

    return 0;
}