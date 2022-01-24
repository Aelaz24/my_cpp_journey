#include <iostream>
#include <cstdlib>

void play_game()
{

}




int main()
{
    int choice;
    do
    {
        std::cout << "0.Quit\n1.Play Game\n";
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "Thanks for nothing";
            break;
        case 1:
            play_game();
            break;
        }

    } while (choice != 0);
    



    

      
}