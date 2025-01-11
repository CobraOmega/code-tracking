#include<iostream>

int main()
{
    std::string Team[] = {"Yashad", "Chinu", "Mihir", "Eshant"};
    for(std::string Teams : Team)
    {
        std::cout << Teams << "\n";
    };
    return 0;
}

