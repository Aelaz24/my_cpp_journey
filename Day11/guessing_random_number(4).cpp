#include <iostream>
#include <limits>
using namespace std;

void print_guesses(int guesses[], int guest_count)
{
    cout << "You got it in " << guest_count << " guesses\n";
    for (int i = 0; i < guest_count; i++)
    {
        cout << guesses[i] << "\t";
    }
    cout << endl;
}

void play_game()
{
    int guesses[251];
    int guest_count = 0;
    int random = (rand() % 250) + 1;
    int guess;
    int exit_game = 0;
    do
    {
        cout << random << endl;
        cout << "Please guess the number (1-250), input 0 to enter main menu ";
        cin >> guess;
        guesses[guest_count++] = guess;
        if (cin.fail() || cin.bad() || guess < 0 || guess > 250)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You have entered wrong input. (input should be number between 1-250)" << endl;
            continue;
        }
        else if (guess == 0)
        {
            break;
        }
        else if (guess < random)
        {
            cout << "Too low, please do more guess ";
        }
        else if (guess > random)
        {
            cout << "Too high, please do more guess ";
        }

    } while (guess != random);
    cout << "Yee its " << random << ", you guess the right number\n";
    print_guesses(guesses, guest_count);
}

int main()
{
    srand(time(NULL));
    int choice;
    cout << "Welcome to Aelaz24's guessing random number game\n";
    cout << "In this version you need to guess a random number (1-250)\n";

    do
    {
        cout << "1.Quit\n2.Play Game\n";
        cin >> choice;
        if (cin.fail() || cin.bad() || choice < 1 || choice > 2)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter the right choice " << endl;
            continue;
        }
        else if (choice == 2)
        {
            play_game();
        }
        else
        {
            cout << "Thanks for nothing\n";
        }
    } while (choice != 1);
}