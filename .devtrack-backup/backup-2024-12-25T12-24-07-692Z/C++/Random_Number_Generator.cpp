//WAP to find a number of dice thrown.
#include<iostream>
#include<ctime>

int main()
{
    srand(time(NULL));

    int num = (rand() % 6) + 1;
    std::cout<<num;

    return 0;
}