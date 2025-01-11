/*
exams -> certificate
result -> certificate
1. exmas 
marks
2. percentage
*/

#include<iostream>
using namespace std;

class exams
{
    public:
    void getdata()
    {
        int marks;
        cout << "Enter your marks";
        cin >> marks;
    }
};

class result
{
    float per;
    public:
    void getdata()
    {
        cout << "Enter your percentage";
        cin >> per;
    }
};

class certificate
{
    
};
