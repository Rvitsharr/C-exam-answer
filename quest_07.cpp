#include <iostream>

template <typename T>
T findMax(T a, T b)
{
    T max;

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
    
    
}

int main()
{
    std::cout << findMax<int>(1, 2) << std::endl;
    std::cout << findMax<double>(1.3, 4.5) << std::endl;
    std::cout << findMax<char>('a', 'b') << std::endl;
    std::cout << findMax<std::string>("Human", "Animal") << std::endl;


    return 0;
}