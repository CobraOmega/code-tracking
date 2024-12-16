//Snake Ladder Game
#include<iostream>
using namespace std;

class SnakeLadders
{
    int board[10][10];
    char player1;
    char player2;

    public:

    int Snakeladders()
    {
        printboard();
    }

    void printboard()
    {
        for(int i = 100; i > 90; i--)
        {
            cout << "| " << i << ""; 
        }
        cout <<"\n";
        for(int i = 80; i <90; i++)
        {
            cout << "| " << i << "";
        }
    }

};

int main()
{
    SnakeLadders s1;
    s1.printboard();

    return 0;
}

