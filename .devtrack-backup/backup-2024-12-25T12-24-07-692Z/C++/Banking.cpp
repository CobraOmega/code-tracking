//CREATE A BANKING SYSTEM.
#include<iostream>
#include<iomanip> // To set precision in balance

void showbalance(double balance);  
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0; //default balance here
    int choice = 0;

    do
    {
        std::cout << "************************************\n";
        std::cout << "Enter Your Choice: \n";
        std::cout << "************************************\n";
        std::cout << "\n1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;  // It shows the choice
    
        switch(choice)
        {
            case 1: showbalance(balance); // when you enter balance
                    break;
            case 2: balance += deposit(); // when you enter deposit
                    showbalance(balance);
                    break;
            case 3: balance -= withdraw(balance); // when you enter withdraw
                    showbalance(balance);
                    break;
            case 4: std::cout << "Thankyou for visiting!!! Have a Great Day!!!"; //when you exit
                    break;
            default: std::cout << "Invalid Choice\n"; // when enter wrong choice
                    break;
        }
    }while(choice != 4); 
    
    return 0;
}

void showbalance(double balance) //shows the balance
{
    std::cout << "Your Current Balance is $" << std::setprecision(2) << std::fixed << balance << "\n";  //setprecision is used to precise the double ammount in this case it's 2.
                                                                                                        //fixed is used to fix it at .2 
}

double deposit() //for deposit
{
    double amount = 0; //default amount here

    std::cout << "Enter the ammont you wish to deposit: $"; //To enter the deposit ammount
    std::cin >> amount;  // to take the ammount

    

    if(amount > 0){  //if amount is more than 0 print amount
        return amount;
    }
    else{            //if negetive print not valid
        std::cout << "That's not a valid amount\n";
        return 0;
    }
    std::cout << "$ " << deposit << " Sucessfully deposited in your account.\n";
}

double withdraw(double balance)  //for withdraw
{
    double amount = 0; //default amount here

    std::cout << "Enter the ammount you wish to withdraw: $"; //to enter withdraw
    std::cin >> amount;  //to take withdraw

    if(amount > balance)   //if amount is more than available balance print insifficient balance
    {
        std::cout << "Insufficient balance in your account!\n";
        return 0;    //return balance before withdrawl
    }
    else if(amount < 0)     //if negaive ammount print invalid amount
    {
        std::cout << "Invalid amount.\n";  
        std::cout << "Please enter valid amount.\n";
        return 0;   //return balance before withdrawl
    }
    else
    {
    std::cout << "$ " << amount << " Sucessfully withdrew from your account.\n";  //to state successful withdrawl
    return amount;  //return balance after withdrawl
    }      
}