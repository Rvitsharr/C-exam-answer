#include <iostream>
#include <string>
#include <variant>


bool isEqual(int a, int b)
{
    return a == b;
}

bool isEqual(double a, double b)
{
    return a == b;
}

std::variant<int, double> getInput()
{
    std::string input;
    std::cout << "Enter a number: ";
    std::getline(std::cin, input);

    if (input.find('.') != std::string::npos) 
    {
        return std::stod(input);
    } 
    else 
    {
        return std::stoi(input);
    }
}

int main()
{
    auto a = getInput(); 
    auto b = getInput(); 

    if (a.index() == 0 && b.index() == 0)
    { 
        std::cout << std::boolalpha << isEqual(std::get<int>(a), std::get<int>(b)) << std::endl;
    } 
    else if (a.index() == 1 && b.index() == 1) 
    { 
        std::cout << std::boolalpha << isEqual(std::get<double>(a), std::get<double>(b)) << std::endl;
    }

    return 0;
}
