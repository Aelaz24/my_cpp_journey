#include <iostream>

double sum(double a, double b, double c)
{
    return a + b + c;
}

double average(double a, double b, double c)
{
    double my_sum = sum(a,b,c);
    double my_average = my_sum / 3;
    return my_average;
}


int main()
{
    double number1, number2, number3;
    std::cout << "Enter 3 numbers : \n";
    std::cin >> number1 >> number2 >> number3;
    std::cout << "Sum = " << sum(number1, number2, number3) << std::endl;
    std::cout << "Average = " << average(number1, number2, number3) << std::endl;
}