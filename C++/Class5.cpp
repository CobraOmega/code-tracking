/*
Payrool
1. Pay detail
2. address
3. exit

1)
salary = input
bonus = 10%
pf = 5%
netsal

2)
empid
name
address
phone
*/
#include<iostream>
using namespace std;

class payrool
{
    int sal, bonus, pf, netsal, phone, empid;
    char name[10];
    string address;

    public:

    void paydetails()
    {
        cout << "Enter Your salary: $";
        cin >> sal;
        cout << "\nYour bonus is $" << sal *10/100;
        cout << "\nYour pf is $" << sal *5/100;
        cout << "\nYour Net salary is $" <<sal + (sal *10/100) - (sal *5/100);
    }
    
    void setaddress()
    {
        cout << "Enter Your Employee ID: ";
        cin >> empid;
        cout <<"Enter your name: ";
        cin >> name;
        cout << "Enter your address\n";
        getline(cin >> ws, address);
        cout << "Enter your phone number : ";
        cin >> phone;
    }
};

int main()
{
    int x;
    payrool p1;
    do
    {
        cout << "\n1. pay details";
        cout << "\n2. address";
        cout << "\n3. exit";
        cin >> x;

            if(x == 1)
        {
            p1.paydetails();
        }
        else if(x == 2)
        {
            p1.setaddress();
        }
        else if(x == 3)
        {
            cout << "Thankyou for visiting\n";
        }
        else
        {
            cout << "Enter correct choice\n";
        }
    }while(x != 3);
    return 0;
}