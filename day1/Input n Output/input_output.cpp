#include <iostream>
#include <string>

int main()
{
    int coins;
    std::string server;
    std::cout << "What is your server ?\n";
    std::cin >> server;
    std::cout << "How much coin u have at " << server << std::endl;
    std::cin >> coins;
    std::cout << "You have " << coins << " coins at " << server << " server.";
}
    

/* 
What is your server ?
Valhalla
How much coin u have at Valhalla
500000
You have 500000 coins at Valhalla server. 
*/