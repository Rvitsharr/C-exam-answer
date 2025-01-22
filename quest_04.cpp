#include <iostream>

bool isEqual(int a, int b)
{
    return a == b;
}

bool isEqual(float a, float b)
{
    return a == b;
}

int main()
{
    
    std::cout << std::boolalpha << isEqual(1.1f, 1.1f) << std::endl;

    return 0;
}