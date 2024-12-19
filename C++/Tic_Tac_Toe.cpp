#include <iostream>  //For input/output using cin and cout
#include <ctime>     //For time function to seed random generator 

using namespace std; //To not use std:: everytime
class TicTacToe
{
    private:
    char board[3][3];       //Set size of board
    char PLAYER = 'X';      //Symbol for Player in CVP mode
    char COMPUTER = 'O';    //Symbol for Computer in CVP mode
    char currentmarker;     //Determine symbol for player1 and player 2 as 'X' and 'O' in PVP mode
    string currentplayer;   //Determine if player playing is Player 1 or Player 2 in PCP Mode

    public:
    TicTacToe()
    {
        resetboard();
    }

    void resetboard()   //To reset data of board
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                board[i][j] = ' ';
            }
        }
    }

    void printboard()   //To print board for PVP and CVP mode
    {
        cout << "\n";
        cout << "  " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
        cout << " ---+---+---\n";
        cout << "  " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
        cout << " ---+---+---\n";
        cout << "  " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
        cout << "\n";
    }

    bool checkfreespaces() //To check if there is a free space to make a move
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(board[i][j] == ' ')
                {
                    return true;    //If space is there it will return the value as true
                }
            }
        }
        return false;   //If space is not there it will return the value as false
    }

    void playermove() //For player move in CVP
    {
        int x, y;
        do
        {
            cin >> x >> y;

            x--;
            y--;

            if(x < 0 || x > 2 || y < 0 || y > 2)
            {
                cout << "Invalid Move. Try Again!!!\n";
            }
            else if(board[x][y] != ' ')
            {
                cout << "Spot is not available.Try again\n";
                continue;
            }
            else
            {
                board[x][y] = PLAYER;
                break;
            }
        }while(true);
    }

    void easymove() //For Computer move easy mode in CVP
    {   
       int x,y;
        srand(time(0));
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while(board[x][y] != ' ');
        board[x][y] = COMPUTER;  //Place the computer's move
    }

    void mediummove()
    {
        //to check winning or blocking spot in columns
        for(int i = 0; i < 3; i++)
        {
            if(board[i][0] == board[i][1] && board[i][0] != ' ' && board[i][2] == ' ')
            {
                board[i][2]  = COMPUTER;
                return;
            }
            if(board[i][1] == board[i][2] && board[i][1] != ' ' && board[i][0] == ' ')
            {
                board[i][0]  = COMPUTER;
                return;
            }
            if(board[i][0] == board[i][2] && board[i][0] != ' ' && board[i][1] == ' ')
            {
                board[i][1]  = COMPUTER;
                return;
            }
        }
        //to check winning or blocking spot in rows
        for(int i = 0; i < 3; i++)
        {
            if(board[0][i] == board[1][i] && board[0][i] != ' ' && board[2][i] == ' ')
            {
                board[2][i] = COMPUTER;
                return;
            }
            if(board[1][i] == board[2][i] && board[1][i] != ' ' && board[0][i] == ' ')
            {
                board[0][i] = COMPUTER;
                return;
            }
            if(board[0][i] == board[2][i] && board[0][i] != ' ' && board[1][i] == ' ')
            {
                board[1][i] = COMPUTER;
                return;
            }
        }
        //to check winning or blocking spot in diagonals L to R
        if(board[0][0] == board[1][1] && board[0][0] != ' ' && board[2][2] == ' ')
        {
            board[2][2] = COMPUTER;
            return;
        }
        if(board[1][1] == board[2][2] && board[1][1] != ' ' && board[0][0] ==' ')
        {
            board[0][0] = COMPUTER;
            return;
        }
        if(board[0][0] == board[2][2] && board[0][0] != ' ' && board[1][1] ==' ')
        {
            board[1][1] = COMPUTER;
            return;
        }
        //to check winning or blocking spot in diagonals R to L
        if(board[0][2] == board[1][1] && board[0][2] != ' ' && board[2][0] ==' ')
        {
            board[2][0] = COMPUTER;
            return;
        }
        if(board[0][2] == board[2][0] && board[0][2] != ' ' && board[1][1] ==' ')
        {
            board[1][1] = COMPUTER;
            return;
        }
        if(board[2][0] == board[1][1] && board[2][0] != ' ' && board[0][2] ==' ')
        {
            board[0][2] = COMPUTER;
            return;
        }
        else
        {
            easymove();
        }
    }

    void hardmove()     //For Computer move Hard mode
    {
        //to check winning or blocking spot in columns
        for(int i = 0; i < 3; i++)
        {
            if(board[i][0] == board[i][1] && board[i][0] != ' ' && board[i][2] == ' ')
            {
                board[i][2]  = COMPUTER;
                return;
            }
            if(board[i][1] == board[i][2] && board[i][1] != ' ' && board[i][0] == ' ')
            {
                board[i][0]  = COMPUTER;
                return;
            }
            if(board[i][0] == board[i][2] && board[i][0] != ' ' && board[i][1] == ' ')
            {
                board[i][1]  = COMPUTER;
                return;
            }
        }
        //to check winning or blocking spot in rows
        for(int i = 0; i < 3; i++)
        {
            if(board[0][i] == board[1][i] && board[0][i] != ' ' && board[2][i] == ' ')
            {
                board[2][i] = COMPUTER;
                return;
            }
            if(board[1][i] == board[2][i] && board[1][i] != ' ' && board[0][i] == ' ')
            {
                board[0][i] = COMPUTER;
                return;
            }
            if(board[0][i] == board[2][i] && board[0][i] != ' ' && board[1][i] == ' ')
            {
                board[1][i] = COMPUTER;
                return;
            }
        }
        //to check winning or blocking spot in diagonals L to R
        if(board[0][0] == board[1][1] && board[0][0] != ' ' && board[2][2] == ' ')
        {
            board[2][2] = COMPUTER;
            return;
        }
        if(board[1][1] == board[2][2] && board[1][1] != ' ' && board[0][0] ==' ')
        {
            board[0][0] = COMPUTER;
            return;
        }
        if(board[0][0] == board[2][2] && board[0][0] != ' ' && board[1][1] ==' ')
        {
            board[1][1] = COMPUTER;
            return;
        }
        //to check winning or blocking spot in diagonals R to L
        if(board[0][2] == board[1][1] && board[0][2] != ' ' && board[2][0] ==' ')
        {
            board[2][0] = COMPUTER;
            return;
        }
        if(board[0][2] == board[2][0] && board[0][2] != ' ' && board[1][1] ==' ')
        {
            board[1][1] = COMPUTER;
            return;
        }
        if(board[2][0] == board[1][1] && board[2][0] != ' ' && board[0][2] ==' ')
        {
            board[0][2] = COMPUTER;
            return;
        }
        //If possible choose centre piece
        if(board[1][1] == ' ') 
        {
            board[1][1] = COMPUTER;
            return;
        }
        //If centre not possible choose 1 corner
        if(board[1][1] != ' ' && board[0][0] == ' ') //left top corner
        {
            board[0][0] = COMPUTER;
            return;
        }
        if(board[1][1] != ' ' && board[0][2] == ' ') //right top corner
        {
            board[0][2] = COMPUTER;
            return;
        }
        if(board[1][1] != ' ' && board[2][0] == ' ') //left bottom corner
        {
            board[2][0] = COMPUTER;
            return;
        }
        if(board[1][1] != ' ' && board[2][2] == ' ') //left bottom corner
        {
            board[2][2] = COMPUTER;
            return;
        }
        else
        {
            easymove();
        }
    }

    void computermove(int difficulty)   //To set difficulty for computer in CVP Mode
    {   
        bool validchoice = false; //to set validchoice as true/false

        while (!validchoice)
        {
            switch(difficulty)
            {
                case 1: //easy
                {
                    easymove();
                    validchoice = true; //validchoice is true so it terminate loop
                    break;
                }
                case 2: //medium
                {
                    mediummove();
                    validchoice = true; //validchoice is true so it terminate loop
                    break;
                }
                case 3:
                {
                    hardmove();
                    validchoice = true; //validchoice is true so it terminate loop
                    break;
                }
                case 4:
                {
                    menu();
                    break;
                }
                default : //validchoice is false so it loops again
                {
                    validchoice = false;
                    cout << "Invalid choice! Choose again.\n";
                }
            }
        }
    }

    char checkwinner() //To check who is the winner of game or if it is a tie
    {
        //For rows
        for(int i = 0; i < 3; i++)
        {
            if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            {
                return board[i][0];
            }
        }
        //For Columns
        for(int i = 0; i < 3; i++)
        {
            if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            {
                return board[0][i];
            }
        }
        //for Diagonals
        if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        {
            return board[0][0];
        }
        if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        {
            return board[0][2];
        }
        if(checkfreespaces())
        {
            return ' ';
        }
        return 't';
    }

    void printwinner(char winner) //To print the winner or show if it tied
    {
        if(winner == PLAYER)
        {
            cout << "You Won!!!\n";
        }
        else if(winner == COMPUTER)
        {
            cout << "Computer Won!!!\n";
        }
        else if (winner == 't')
        {
        cout << "It's a tie! Good game.\n";
        } 
        else
        {
        cout << "Invalid winner input. Something went wrong." << endl;
        }
    }

    void instructions() //For the instructions for CVP Mode
    {
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        cout << "** Tic Tac Toe: Game Instructions **\n";
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        cout << "Welcome to Tic Tac Toe! The game is simple, fun, and quick to play.\n";
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        cout << "Objective of the Game:\n";
        cout << "1. The game is played on a 3x3 grid.\n";
        cout << "2. Your goal is to place three of your symbols (X or O) in a row, column, or diagonal before your opponent.\n";
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        cout << "How to Play:\n";
        cout << "1. You play as 'X', and the computer plays as 'O'.\n";
        cout << "2. On each turn, choose a grid position to place your symbol.\n";
        cout << "3. The grid is numbered as follows (row and column numbers):\n";
        cout << "\n";
        cout << "     1 | 2 | 3\n";
        cout << "    ---|---|---\n";
        cout << "     4 | 5 | 6\n";
        cout << "    ---|---|---\n";
        cout << "     7 | 8 | 9\n";
        cout << "\n";
        cout << "4. Input the position in matrix format (For Example '2 2' for centre) to place your symbol.\n";
        cout << "5. The computer will place 'O' in an available spot.\n";
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        cout << "Winning the Game:\n";
        cout << "1. A player wins by placing three of their symbols in a row, column, or diagonal.\n";
        cout << "2. A tie occurs if the grid is full and no player has won.\n";
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        cout << "Good luck and enjoy the game!\n";
        cout << "-----------------------------------------------------------------------------------------------------------\n";
    }

    void computermodeplay(int difficulty)   //To let computer make it's move based on set difficulty
    {
        char winner = ' ';
        resetboard();
        while(winner == ' ' && checkfreespaces())
        {
            printboard();
            cout << "Player's Turn:\n";
            playermove();

            winner = checkwinner();
            if(winner != ' ') break;

            printboard();
            cout << "Computer's Turn";
            computermove(difficulty);

            winner = checkwinner();
            if(winner != ' ') break;
        }
       
        printboard();
        printwinner(winner);
    }

    void PVPplayermove()    //To take input of players in PVP mode
    {
        int x, y;

        do
        {
            cin >> x >> y;

            x--;
            y--;

            if(x < 0 || x > 2 || y < 0 || y > 2)
            {
                cout << "Invalid Move. Try Again!!!\n";
            }
            else if(!checkfreespaces())
            {
                cout << "Space Full. Try Again!";
            }
            else if (board[x][y] != ' ') 
            {
                cout << "Invalid Move! Spot is Already Occupied. Try Again.\n";
            }
            else
            {
                board[x][y] = currentmarker;
                break;
            }
        }while(true);
    }

    void switchplayer()     //To switch move chance between Player 1 and Player 2 simuntaniously
    {
        if(currentmarker == 'X')
        {
            currentmarker = 'O';
            currentplayer = "Player 2";
        }
        else {
        currentmarker = 'X';
        currentplayer = "Player 1";
        }
    }

    void PVPprintwinner(char winner)    //To print the winner or to show if it's a tie in PVP mode
    {
        if(winner == 'X')
        {
            cout << "Player 1 (X) Won!!!\n";
        }
        else if(winner == 'O')
        {
            cout << "Player 2 (O) Won!!!\n";
        }
        else if (winner == 't')
        {
        cout << "It's a tie! Good game.\n";
        } 
        else
        {
        cout << "Invalid winner input. Something went wrong." << endl;
        }
    }

    void playermodeplay()   //Game for PVP mode
    {
        char winner = ' ';
        currentmarker = 'X';        //Initialize to Player 1 marker
        currentplayer = "Player 1";

        resetboard();
        while(winner == ' ' && checkfreespaces()) 
        {
            printboard();
            cout << currentplayer << "'s turn:\n";
            PVPplayermove();

            winner = checkwinner();
            
            if(winner != ' ') break;

            switchplayer();
        }
        printboard();
        PVPprintwinner(winner);
    }
    
void mainmenu()     //Main Menu Function
{
    int choice1 = 0;   //Initialize choice1 for the main menu
    do 
    {
        cout << "Welcome to Tic Tac Toe game!!!\n";
        cout << " ______________________________ \n";
        cout << "|           1. Play            |\n";
        cout << "|                              |\n";
        cout << "|           2. Help            |\n";
        cout << "|                              |\n";
        cout << "|           3. Exit            |\n";
        cout << "|______________________________|\n";
        cout << "Enter your choice: ";
        cin >> choice1;

        switch(choice1)
        {
            case 1: //Navigate to Play Menu
                menu(); //Call the Play menu function
                break;
            case 2: //Instructions
                instructions();
                break;
            case 3: //Exit
                cout << "Exiting the game. Goodbye!\n";
                exit(0);
                break;
            default:
                cout << "Invalid choice! Please select between 1-3.\n";
        }
    } while(choice1 != 3); //Loop until Exit is chosen
}

void menu() //Play Menu Function
{
    int choice2 = 0, difficulty; //Choice for the play menu
    bool goback = false;
    do 
    {
        cout << " ____________________________________________\n";
        cout << "|                Select Mode                 |\n";
        cout << "|____________________________________________|\n";
        cout << "|        1. Player VS Player (PVP)           |\n";
        cout << "|                                            |\n";
        cout << "|        2. Computer VS Player (CVP)         |\n";
        cout << "|                                            |\n";
        cout << "|        3. Back                             |\n";
        cout << "|____________________________________________|\n";
        cout << "Enter your choice: ";
        cin >> choice2;

        switch(choice2)
        {
            case 1: //PVP Mode
                {
                    cout << "Welcome to Player VS Player Mode of Tic Tac Toe.\n";
                    playermodeplay();
                    break;
                }
            case 2: //CVP Mode
                {
                    int difficulty = 0;
                    cout << "Welcome to Computer VS Player Mode of Tic Tac Toe.\n";
                    cout << " _________________________________________ \n";
                    cout << "|            Select Difficulty            |\n";
                    cout << "|_________________________________________|\n";
                    cout << "|            1. Easy                      |\n";
                    cout << "|                                         |\n";
                    cout << "|            2. Medium                    |\n";
                    cout << "|                                         |\n";
                    cout << "|            3. Hard                      |\n";
                    cout << "|                                         |\n";
                    cout << "|            4. Back                      |\n";
                    cout << "|_________________________________________|\n";

                    do 
                    {
                        cout << "Enter your choice: ";
                        cin >> difficulty;
                        if(difficulty == 1) {
                            cout << "You have chosen Easy Difficulty!\n";
                            
                        } 
                        else if (difficulty == 2) 
                        {
                            cout << "You have chosen Medium Difficulty!\n";
                            
                        } 
                        else if (difficulty == 3) 
                        {
                            cout << "You have chosen Hard Difficulty!\n";
                            
                        }
                        else if (difficulty == 4) 
                        {
                            menu(); 
                        } 
                        else 
                        {
                            cout << "Invalid difficulty choice! Please choose again\n";
                        }
                    }while(difficulty != 1 && difficulty != 2 && difficulty != 3);
                    computermodeplay(difficulty);
                }
                                    
                break;
            case 3: //Back to Main Menu
            {
                cout << "Returning to Main Menu...\n";
                mainmenu();
            }
                
            default:
                cout << "Invalid choice! Please select between 1-3.\n";
        }
    } while(!goback); //Loop until "Back" is chosen
}
};

int main()
{
    TicTacToe game;
    game.mainmenu();
    return 0;
}