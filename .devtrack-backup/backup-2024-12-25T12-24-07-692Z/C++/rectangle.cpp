// WAP to print rectangle out of symbols (length and width are to be taken from user.)
//start
//enter length
//enter width
//for loop(for row)
//for loop[nested](for column)
//print
//end
#include<iostream>

int main()
{
    int row;
    int column;
    char symbol;

    std::cout << "How many rows? ";
    std::cin >> row;

    std::cout << "How many columns? ";
    std::cin >> column;

    std::cout << "Entera Symbol to use: ";
    std::cin >> symbol;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            std::cout<< symbol; 
        }
        std::cout << "\n";
    }

    return 0;
}