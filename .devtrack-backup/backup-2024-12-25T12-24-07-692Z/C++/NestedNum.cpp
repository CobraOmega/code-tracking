#include <iostream>

int main() {
    int n, num = 1;

    std::cout << "Enter the value of n: "; //For value of n
    std::cin >> n;
    
    
    for (int i = 1; i <= n; i++) {   //outer loop
        for (int j = 1; j <= i; j++) {  // inner loop
            std::cout << num;
            if (j != i) {
                std::cout << ",";
            }
            num++;
        }
        std::cout << "\n";  // To move to next line
    }
    
    return 0;
}