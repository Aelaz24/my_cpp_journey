#include <iostream>

int main()
{
    char grade = 'C';

    switch (grade)
    {
    case 'A':
        std::cout << "Excellent\n";
        break;
    case 'B':
        std::cout << "Good Job\n";
        break;
    case 'C':
        std::cout << "Well Done\n";
        break;
    
    default:
        std::cout << "Try Again";
    }

    std::cout << "Your grade is " << grade;
}