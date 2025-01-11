//Single inheritance

#include<iostream>
using namespace std;

class india
{
    int age;
    
    public:

    void getdata()
    {
        cout << "Enter age: ";
        cin >> age;
    }

    void putdata()
    {
        cout << "Age = " << age ,, "\n";
    }
};

class pakistan
{
    int salary;
    
    public:

    void getdata()
    {
        india::getdata();
        cout << "Enter Salary";
        cin >> salary;
    }

    void putdata()
    {
        india::putdata();
        cout << "salary = " << salary <<'\n';
    }

    int main()
    {
        pakistan p1;
        p1.getdata();
        p1.putdata();

        return 0;
    }
};