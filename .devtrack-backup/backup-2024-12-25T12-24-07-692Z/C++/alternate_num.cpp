//WAP on displays a sequence of positive and negative numbers.
#include <iostream>

int main()
{
    int n;

    std::cout << "*************************\n";
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            std::cout << '+' << i;
        }

        else
        {
            std::cout << '-' << i;
        }
        if(i != n)
        {
            std::cout << ',';
        }
    }
     std::cout << "\n*************************";

    return 0;
}