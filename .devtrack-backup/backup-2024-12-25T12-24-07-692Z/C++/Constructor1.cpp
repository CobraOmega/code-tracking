// illustrate example of constructor and destructor
#include<iostream>
using namespace std;

class abc
{
    public:
    abc()    // constructor
    {
        cout << "I am a Constructor.\n";
    }
    ~abc()
    {
        "I am a destructor.\n";
    }
};

int main()
{
    abc a1, a2;
    return 0;
}