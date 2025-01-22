#include <iostream>
#include <string>

class Vehicle
{
protected:
    std::string make_;
    std::string model_;

public:
    Vehicle(std::string make, std::string model) : make_(make), model_(model) {}

    virtual void displayInfo() = 0; // Pure virtual function
};

class Car : public Vehicle
{
private:
    int num_of_doors_;

public:
    Car(std::string make, std::string model, int num_of_doors) 
        : Vehicle(make, model), num_of_doors_(num_of_doors) {}

    void displayInfo() override
    {
        std::cout << "Make: " << make_ << std::endl;
        std::cout << "Model: " << model_ << std::endl;
        std::cout << "Number of doors: " << num_of_doors_ << std::endl;
    }
};

int main()
{
    Car car("Toyota", "Corolla", 4); // Provide necessary arguments
    car.displayInfo();

    return 0;
}
