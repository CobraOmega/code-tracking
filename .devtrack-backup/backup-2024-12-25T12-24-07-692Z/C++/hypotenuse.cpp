//WAP to find hypotenuse of a right angled triangle with sides a,b,c.
#include<iostream>
#include<math.h>
int main(){
    double a;   //base of triangle.
    double b;   //height of triangle.
    double c;   //hypotenuse of triangle.
    std::cout << "Enter base: ";
    std::cin >> a;
    std::cout << "Enter height: ";
    std::cin >> b;
    a = pow(a,2);
    b = pow(b,2);
    c = sqrt(a+b);
    std::cout << "Hypotenuse of given right angled triange is: " << c;
    return 0;
}
