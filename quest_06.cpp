#include <iostream>

class Student
{
private:
    std::string name_;
    std::string class_;
    std::string roll_number_;
    int marks_;

public:
    Student (std::string name, std::string class_name, std::string roll_number, int marks) :
            name_(name), class_(class_name), roll_number_(roll_number), marks_(marks) {};

    char calculateGrade() const 
    {
        if (marks_ >= 90)
            return 'A';
        else if (marks_ >= 80)
            return 'B';
        else if (marks_ >= 70)
            return 'C';
        else if (marks_ >= 60)
            return 'D';
        else if (marks_ >= 40)
            return 'E';
        else
            return 'F';
    }

    void displayDetails() const 
    {
        std::cout << "Name: " << name_ << std::endl;
        std::cout << "Class: " << class_ << std::endl;
        std::cout << "Roll Number: " << roll_number_ << std::endl;
        std::cout << "Marks: " << marks_ << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
    }

    
};

int main()
{
    Student student("Win Thiha", "10th grade", "007", 100);

    student.displayDetails();
    return 0;
}