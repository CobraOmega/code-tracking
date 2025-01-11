/*
RAILWAYS RESERVAION
1. booking
2. cancellation
3. exit

1)
1 km = $2
ticket no
pname
distance
amount = distance * km

2)
days
amount
if days > 30
charge = amount * 20/100
else
charge = amount * 50/100
*/

#include <iostream>
using namespace std;

class railways
{
    int km = 2, tno, dis, amount, charge, days, ramount;
    char pname[10], source{20}, dist[20];

    public:

    void booking()
    {
        cout << "Welcome to Ticket Booking Department.\n";
        cout << "Enter Your Name: ";
        cin >> pname[10];

        km = 2;
        cout << "enter source and dis of Passanger\n";
        cin >> source >> dis;

        cout << "Enter Ticket number: ";
        cin >> tno;

        cout << "Enter the distance: ";
        cin >> dist[20];


        amount = dist[20] * km;

        cout << "Ticket price is " << amount;
    }

    void cancellation()
    {
        cout << "Enter the day for cancellation\n";
        cin >> days;
        cout << "Enter amount : ";
        cin >> amount;
        if(days >=30)
        {
            charge = amount *20/100;
            cout << "Ticket charge = $" << charge;
            ramount = amount - charge;
            cout << "Your refund amount is $" << ramount;
        }
        else{
            charge = amount *50/100;
            cout << "Ticket charge = $" << charge;
            ramount = amount - charge;
            cout << "Your refund amount is $" << ramount;
        }
    }

};
int main()
{
    int x;
    railways r1;
    cout << "**********INDIAN RAILWAYS RESERVATION**********\n";
    cout << "***********************************************\n";
    cout << "      Welcome to Railways Reservation\n";
    cout << "                1. Booking\n";
    cout << "                2. Cancelation\n";
    cout << "                3. Exit\n";
    cout << "***********************************************\n";
    cin >> x;
    do
    {   
        switch(x)
        {
            case 1: 
            r1.booking();
            break;
            case 2:
            r1.cancellation();
            break;
            case 3:
            cout << "Thankyou for visiting";
            break;
        }
    }while(x != 3);
    return 0;
};

