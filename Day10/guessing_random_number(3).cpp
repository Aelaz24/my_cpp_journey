#include <iostream>
#include <limits>
#include <stdlib.h>
using namespace std;

void play_game()
{
    int min = 1;
    int max = 250;
    int random = rand() % 251;
    cout << "Guess a number (1-250)\n";
    cout << random << endl;
    int guess;
    do
    {
        cin >> guess;
        if (cin.fail() || cin.bad() || guess < min || guess > max)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You have entered wrong input. (input should be number between 1-250)" << endl;
            continue;
        }
        else if (guess < random)
        {
            cout << "Too low\nPlease do more guess\n";
        }
        else if (guess > random)
        {
            cout << "Too high\nPlease do more guess\n";
        }
        else
        {
            cout << "Yeee, you guess the right number\n";
        }
    } while (guess != random);
}

int main()
{
    srand(time(NULL));
    int choice;

    do
    {
        cout << "0.Quit\n1.Play\n";
        std::cin >> choice;

        if (choice == 0)
        {
            cout << "Thanks xD\n";
        }
        else
        {
            play_game();
        }
    } while (choice != 0);
}