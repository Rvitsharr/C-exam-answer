//Floyd's Triangle
#include <iostream>

int main()
{
    
    int number = 1;
    int number_of_row;

    std::cout << "Number of rows: ";
    std::cin >> number_of_row;

    for (int i = 1; i <= number_of_row; ++i) 
    {
        for (int j = 1; j <= i; ++j) 
        {
            std::cout << number;
            ++number; 
        }
        std::cout << std::endl; 
    }
    return 0;
}