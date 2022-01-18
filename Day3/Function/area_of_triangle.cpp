#include <iostream>

int main()
{
    double base, height, area;
    std::cout << "What is the base ? : ";
    std::cin >> base;
    std::cout << "What is the height ? : ";
    std::cin >> height;
    area = 0.5 * base * height;
    std::cout << "The area is " << area;
}