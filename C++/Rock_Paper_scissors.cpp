//WAP to create a rock paper scissors game.

#include<iostream>
#include<ctime>

char getuserchoice();
char getcomputerchoice();
void showchoice(char player);
void choosewinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getuserchoice();
    std::cout << "Your choice is : ";
    showchoice(player);
    computer = getcomputerchoice();
    std::cout << "Computer' choice is : ";
    showchoice(computer);
    choosewinner(player, computer);
    return 0;
}

char getuserchoice()
{
    char player;
    do{
        std::cout << "Rock-Paper-Scissors- Game!!!\n";
    std::cout << "****************************\n";
    std::cout << "Enter Your choice: \n";
    std::cout << "'r' for Rock\n";
    std::cout << "'p' for Paper\n";
    std::cout << "'s' for Scissors\n";
    std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    
    
    return player;
}
char getcomputerchoice()
{
    char computer;
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num){
        case 1 : return 'r';
                 break;

        case 2 : return 'p';
                 break;

        case 3 : return 's';
                 break;
    };
    return computer;
};
void showchoice(char choice)
{
    switch(choice)
    {
        case  'r' : std::cout << "Rock\n";
                    break; 

        case  'p' : std::cout << "Paper\n";
                    break; 

        case  's' : std::cout << "Scissors\n";
                    break;            
    } 
}
void choosewinner(char player, char computer)
{
    switch(player){
        case 'r': if(computer == 'r')
                {
                 std::cout << "Tie!\n";
                }
                else if(computer == 'p')
                {
                    std::cout << "Computer Wins!!!\n";
                }
                else if(computer == 's')
                {
                    std::cout << "You Win!!!\n";
                }
                break;

        case 'p': if(computer == 'p')
                {
                 std::cout << "Tie\n";
                }
                else if(computer == 's')
                {
                    std::cout << "Computer Wins!!!\n";
                }
                else if(computer == 'r')
                {
                    std::cout << "You Win!!!\n";
                }
                break;

        case 's': if(computer == 's')
                {
                 std::cout << "Tie!\n";
                }
                else if(computer == 'r')
                {
                    std::cout << "Computer Wins!!!\n";
                }
                else if(computer == 'p')
                {
                    std::cout << "You Win!!!\n";
                }
                break;                
    }
    
}
