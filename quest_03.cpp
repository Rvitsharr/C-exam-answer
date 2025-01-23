#include <iostream>
#include <array>
#include <algorithm>

std::pair<int, int> getMinMax(const std::array<int, 7>& exam_arr)
{
    auto [min, max] = std::minmax_element(exam_arr.begin(), exam_arr.end());

    return {*min, *max};

}

int main()
{
    std::array<int, 7> exam_arr = {4,6,39,73, 2,5 ,7};

    auto [min, max] = getMinMax(exam_arr);

    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;
    
    return 0;
}
