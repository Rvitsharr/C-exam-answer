#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<int, 7> exam_arr = {4,6,39,73, 2,5 ,7};

    auto [min, max]  = std::minmax_element(exam_arr.begin(), exam_arr.end());

    std::cout << "Min: " << *min << std::endl;
    std::cout << "Max: " << *max << std::endl;
    
    return 0;
}