// WAP ON NUMBER GUESSING GAME.
#include<iostream>
#include<ctime>

int main()
{
    int num; //random generated number
    int guess; // guess from user
    int tries = 25; //number of tries left
    int show;

    srand(time(NULL));
    num = (rand() % 100); //random number is being generated between 0-100 

    std::cout << "********** GUESS THE NUMBER ********** \n";
    std::cout << "INSTRUCTIONS \n";
    std::cout << "You have to guess a number between 0 - 100. \n";
    std::cout << "You will be given a total of 25 tries to guess the right number. \n";
    std::cout << "GOOD LUCK \n\n";

    
    do
    {
        std::cout << "Enter a number between 0 - 100:\n";
        std::cin >> guess;

        tries--;
        if(guess<0 || guess > 100)
        {
            std::cout << "CHOOSE A NUMBER BETWEEN 1 - 100 ONLY!!!";
            break;
        }
       

        if(guess > num)
        {
            std::cout << " Too High!!!\n";
            std::cout << "Tries left: " << tries << "\n\n";
        }
        
        else if(guess < num)
        {
            std::cout << "Too Low!!!\n";
            std::cout << "Tries left: " <<  tries << "\n\n";
        }    
        else 
        {
            std::cout << "You guessed it right!! Congratulations!!!\n";
            std::cout << "No. of tries used: " << show << "\n";
        }

        
        show = 25 - tries;
        
        
        if(tries == 0)
        {
            std::cout << "OUT OF GUESSES!!!\n";
            break;
        }
        
      } while(guess != num);
    return 0;
}