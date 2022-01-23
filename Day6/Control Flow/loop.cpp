#include <iostream>

int main()
{
	int factorial;
	std::cin >> factorial;

	// for(int i = factorial - 1; i > 0; i--)
	// {
	// 	factorial *= i;
	// }

	// std::cout << factorial;


    int i = factorial -1;
    while (i > 0)
    {
        factorial = factorial * i;
        i--;
    }
    
    std::cout << factorial;
}
