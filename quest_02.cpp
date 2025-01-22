#include <iostream>

enum class Seasons {Cool = 1, Hot = 2, Rainy = 3};

int main()
{   
    int season_no;

    std::cout << "+----Myanmer Seasons----+" << std::endl;
    std::cout << "1.Cool Season" << std::endl;
    std::cout << "2.Hot Season" << std::endl;
    std::cout << "3.Rainy Season" << std::endl;
    std::cout << "Put a number of season to choose the season: ";
    std::cin >> season_no;

    Seasons season = static_cast<Seasons>(season_no);

    switch (season)
    {
        case Seasons::Cool:
            std::cout << "November to February" << std::endl;
            break;
        case Seasons::Hot:
            std::cout << "March to May" << std::endl;
            break;
        case Seasons::Rainy:
            std::cout << "June to October" << std::endl;
            break;
    }
    return 0;
}
