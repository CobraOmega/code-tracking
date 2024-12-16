#include<iostream>
#include<ctime>

int main()
{
    srand(time(0));
    int rand_num = rand() % 10 + 1;
    switch(rand_num){
        case 1: std::cout<<"Congractulation you have won a .5 coins!";
        break;

        case 2: std::cout<<"Congractulation you have won a .9 coins!";
        break;

        case 3: std::cout<<"Congractulation you have won a 1 coins!";
        break;

        case 4: std::cout<<"Congractulation you have won a 3 coins!";
        break;

        case 5: std::cout<<"Congractulation you have won a 5.5 coins!";
        break;

        case 6: std::cout<<"Congractulation you have won a 5.9 coins!";
        break;

        case 7: std::cout<<"Congractulation you have won a 7 coins!";
        break;

        case 8: std::cout<<"Congractulation you have won a 8.2 coins!";
        break;
 
        case 9: std::cout<<"Congractulation you have won a 9.4 coins!";
        break;

        case 10: std::cout<<"Congractulation you have won a 10 coins!";
        break;

    }

    return 0;
}