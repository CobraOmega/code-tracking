/*
1.Admin
1->2,3
2.management
3. teacher
2,3-> 4
4. student
1) admin{
adm()
adminid
aname
design};
2) classmgt : public admin{
mt()
mid
name
doj
design};
3) class student : public mgt, public teacher{};
void main(){
student s1;
ti.adm()
s1.mt()
s1.thr()
s1.std()
}
*/
#include <iostream>
#include<string>
using namespace std;

class admin
{
    int adid;
    string aname, designation;
    
    public:

    void adm()
    {
        cout << "Enter your ID: ";
        cin >> adid;
        cout << "Enter your name: ";
        getline(cin, aname);
        cout <<"Your designation" ;
        cin >> designation;
    }
};

class management : virtual public admin
{
    int mid;
    string name, designation, doj;
    public:

    void mgt()
    {
        cout << "Enter your ID: ";
        cin >> mid;
        cout << "Enter your name:\n";
        cin >> name;
        cout <<"Your designation" ;
        cin >> designation;
        cout << "Enter your Date of Joining: ";
        cin >> doj;
    }
};

class teacher : virtual public admin
{
    int tid, salary, bonus, pf, netsal;
    string name, subject;
    public:

    void thr()
    {
        cout<< "Enter your ID: ";
        cin >> tid;
        cout << "Enter Your name: \n";
        cin >> name;
        cout << "Enter the subject you teach: ";
        cin >> subject;
        cout << "Enter Your salary: ";
        cin >> salary;
        cout << "Your bonus is $" << salary * 10/100;
        cout << "\nYour pf is $" << salary * 50/100;
        cout << "\nYour netsal is $" << salary + salary * 10/100 - salary * 50/100;
    }
};

class student : public management, public teacher
{
    int rollno, fees;
    string Class, name; 
    public:
    void std()
    {
        cout << "Enter your roll Number: ";
        cin >> rollno;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your class: ";
        cin >> Class;
        cout << "Enter your fees: $";
        cin >> fees;
    }
};

int main()
{
    student s1;
    s1.adm();
    s1.mgt();
    s1.thr();
    s1.std();
    return 0;
}
