#include<iostream>
using namespace std;

class animal
{
    int age;

    public:

    void getdata()
    {
        cout << "Enter the age of dog: ";
        cin >> age;

    }

    void showdata()
    {
        cout << "age = " << age << endl;
    }
};

int main()
{
    animal a1;
    a1.getdata();
    a1.showdata();

    return 0;
};