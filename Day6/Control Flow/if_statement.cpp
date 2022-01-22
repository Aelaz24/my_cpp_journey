#include <iostream>

int main()
{
    std::cout << "Enter a number ";
    int number;
    std::cin >> number;

    //if structure

    if (number < 0)
    {
        std::cout << number << " is a negative number";
    }
    

    // if else structure

    if (number < 0)
    {
        std::cout << number << " is a negative number";
    } else {
        std::cout << number << " is a positive number";
    }
    
    //if else else if structure

    if (number < 0)
    {
        std::cout << number << " is a negative number";
    } 
    else if (number > 0)
    {
        std::cout << number << " is a positive number";
    } 
    else 
    {
        std::cout << number << "zero";
    }
}