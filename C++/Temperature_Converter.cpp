 //1. start
 //2. Enter temperature degree(F or c)
 //3. enter temperature(eg 43)
 //4. if F convert to C[C = (5/9)*(F-32)]
 //5. If C convert to F[(9/5*C)+32]
 //6. print result
 //7. end
#include<iostream>
int main()
{

    char type;
    long double a, res;

    std::cout<< "********** Temperature Convertor **********";
    std::cout<<"\nEnter temperature (Eg. 23): ";
    std::cin>>a;                         //value of temerature
    std::cout<<"Enter temperature type (Fahrenheit or Celsius): ";
    std::cin>>type;                      // type of temperature

    if (type=='F' || type=='f'){    // converting Fahrenheit to Celsius
        res = 5.0/9.0*(a-32);
        std::cout<<res<<" C";
    }

    else if (type=='C' || type== 'c')   // converting Celsius to Fahrenheit
    {
        res = (9.0/5.0*a)+32;
        std::cout<<res<<" F";
    }
    
    else {                      // incase ofwrong input
        std::cout<<"Wrong Input. Please Enter Correct Type!!!";
    }
    std::cout<<"\n*******************************************";

    return 0;
}