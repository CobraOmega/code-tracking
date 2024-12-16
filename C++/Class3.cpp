/*
customer name
quantity
unitprice
discount ->20%
cpay -> calculate pay
*/

#include<iostream>
using namespace std;

class customer
{   
    char cname[10];
    int uprice, qty, total;
    float dis, cpay;

    public:

    void getdata()
    {
        cout << "Enter your name: ";
        cin >> cname;

        cout << "Enter Quantity of product: ";
        cin >> qty;

        cout << "Enter unit price: ";
        cin >> uprice;

        total = uprice * qty;
        dis = (qty * uprice) * 20/100;
        cpay = uprice * qty - ((qty * uprice) * 20/100);
    }

    void payment()
    {
        cout << "Your total ammount is " << total << endl;

        cout << "20 % discount on " << total << " is " << dis << endl;

        cout << "Ammount need to be paid = " << cpay << endl;
    }
};

int main()
{
    customer c1;
    c1.getdata();
    c1.payment();
    
    return 0;
}