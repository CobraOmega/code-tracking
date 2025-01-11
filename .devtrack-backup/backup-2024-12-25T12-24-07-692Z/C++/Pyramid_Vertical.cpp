/*
    *
   * *
  * * *
 * * * *
* * * * * 
*/
#include<iostream>

int main()
{
    int n;
    std::cout << "Enter the size of pyramid";
    std::cin >> n;

    for(int i = 1; i <= n; i++)  // for number if rows
    {

        for(int j = n - i; j > 0; j--) // space required for shape of pyramid
        {
            std::cout << " ";
        }
    
            for(int k = 1; k <= i; k++)
            {
                std::cout << "* ";
            }
        
        std::cout << "\n";
    }
    return 0;
}