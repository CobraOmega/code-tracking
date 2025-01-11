#include<iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout<<"********** CALCULATOR **********";

    std::cout<<"\nEnter either (+ - * /): ";
    std::cin>>op;
    
     std::cout<<"Enter num1: ";
     std::cin>>num1;;

     std::cout<<"Enter num2: ";
     std::cin>>num2;
     switch(op){
        case '+':
        result = num1 + num2;
        std::cout<<"num1 + num2 = "<< result;
        break;

        case '-':
        result = num1 - num2;
        std::cout<<"num1 - num2 = "<< result;
        break;

        case '*':
        result = num1 * num2;
        std::cout<<"num1 * num2 = "<< result;
        break;

        case '/':
        result = num1 / num2;
        std::cout<<"num1 / num2 = "<< result;
        break;

        default:
        std::cout<<"That was not a valid responce";
        break;
     }

    std::cout<<"\n********************************";

    return 0;
}