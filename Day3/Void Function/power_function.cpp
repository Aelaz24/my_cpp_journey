#include <iostream>

double power(double base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;    
}

void print_power(double base, int exponent)
{
    double my_power = power(base, exponent);
    std::cout << base << " raised to the " << exponent << " power is " << my_power << std::endl;
}

int main()
{
    double base;
    int exponent;
    std::cout << "What is the base ? ";
    std::cin >> base;
    std::cout << "What is the exponent ? ";
    std::cin >> exponent;
    print_power(base, exponent);
}