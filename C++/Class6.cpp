    #include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empid;
    char name[10];
    string address;
    long phone;

public:
    void setAddress() {
        cout << "Enter Your Employee ID: ";
        cin >> empid;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your address: ";
        getline(cin >> ws, address); 
        cout << "Enter your phone number: ";
        cin >> phone;
    }

    void displayAddress() const {
        cout << "\nEmployee ID: " << empid;
        cout << "\nName: " << name;
        cout << "\nAddress: " << address;
        cout << "\nPhone: " << phone << endl;
    }
};


class Payroll : public Employee {
    float sal, bonus, pf, netsal;

public:
    void payDetails() {
        cout << "Enter Your Salary: $";
        cin >> sal;

        bonus = sal * 10 / 100;
        pf = sal * 5 / 100;
        netsal = sal + bonus - pf;

        cout << "\nYour Bonus: $" << bonus;
        cout << "\nYour PF: $" << pf;
        cout << "\nYour Net Salary: $" << netsal << endl;
    }
};

int main() {
    int choice;
    Payroll p1;

    do {
        cout << "\n1. Pay Details";
        cout << "\n2. Address";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            p1.payDetails();
            break;
        case 2:
            p1.setAddress();
            p1.displayAddress();
            break;
        case 3:
            cout << "Thank you for visiting.\n";
            break;
        default:
            cout << "Enter a valid choice.\n";
            break;
        }
    } while (choice != 3);

    return 0;
}
