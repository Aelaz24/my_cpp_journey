#include <iostream>
#include <random>
#include <ctime>
using namespace std;

void play_game()
{
    int random = rand() % 501;
    int answer;
    cout << "Please guess a number (1-500)\n";
    do
    {

        cout << random << std::endl;
        cin >> answer;
        if (answer == random)
        {
            cout << "Yeeeee you guess a right number :)\n";
        }
        else if (answer < random)
        {
            cout << "Too low\n";
        }
        else
        {
            cout << "Too high\n";
        }
    } while (answer != random);
}

int main()
{
    srand(time(NULL));
    int choice;

    do
    {
        cout << "0.Quit\n1.Play Game\n";
        cin >> choice;
        if (choice == 0)
        {
            cout << "Thanks :)\n";
        }
        else
        {
            play_game();
        }
    } while (choice != 0);
}