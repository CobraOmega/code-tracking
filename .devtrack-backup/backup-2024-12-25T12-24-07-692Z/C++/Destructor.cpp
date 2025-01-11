#include<iostream>
using namespace std;

int count = 0;

class demo
{
    public:
    demo()
    {
        count ++;
        cout << "\nNumber of objects created: " << count;
    }

    ~demo()
    {
        count --;
        cout << "\nNumber of objects destroyed: " << count;
    }
};

int main()
{
    demo aa, bb, cc;
    {
        demo dd;
    }
    return 0;
}