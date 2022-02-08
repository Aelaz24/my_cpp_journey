#include <iostream>
#include <vector>
#include <limits>
#include <string>
using namespace std;

void print_vector(vector<int> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << "\t";
    }
    cout << endl;
}

void print_min_number(vector<int> min_number)
{
    int min = min_number[0];
    for (int i = 0; i < min_number.size(); i++)
    {
        if (min_number[i] < min)
        {
            min = min_number[i];
        }
    }
    cout << "Them minimum number from \n";
    print_vector(min_number);
    cout << "Is : \n";
    cout << min << endl;
}

void print_max_number(vector<int> max_number)
{
    int max = max_number[0];
    for (int i = 0; i < max_number.size(); i++)
    {
        if (max_number[i] > max)
        {
            max = max_number[i];
        }
    }
    cout << "Them maximum number from \n";
    print_vector(max_number);
    cout << "Is : \n";
    cout << max << endl;
}

void min_of_number()
{
    cout << "Please input the numbers (WARNING:: input should be number, or program will terminate)\n";
    cout << "Input \"q\" to finish your input\n";
    string choice;
    vector<int> min_number;
    while (true)
    {
        cin >> choice;
        if (choice == "q")
        {
            break;
        }

        else
        {
            int input = atoi(choice.c_str());
            cout << typeid(input).name() << endl;
            cout << "input is " << input << endl;
            if (!input)
            {
                cout << "fail detected\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Please enter the right choice " << endl;
                continue;
            }
            min_number.push_back(input);
        }
    }
    print_min_number(min_number);
}

void max_of_number()
{
    cout << "max of number\n";
    cout << "Please input the numbers (WARNING:: input should be number, or program will terminate)\n";
    cout << "Input \"q\" to finish your input\n";
    string choice;
    vector<int> max_number;
    while (true)
    {
        cin >> choice;
        if (choice == "q")
        {
            break;
        }

        else
        {
            int input = atoi(choice.c_str());
            cout << typeid(input).name() << endl;
            cout << "input is " << input << endl;
            if (!input)
            {
                cout << "fail detected\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Please enter the right choice " << endl;
                continue;
            }
            max_number.push_back(input);
        }
    }
    print_max_number(max_number);
}

int main()
{
    cout << "Welcome to Aelaz24's min and max calculator\n";
    cout << "In this version, you can select min or max at the main menu\n";
    cout << "Min menu is for calculating the minimum number\n";
    cout << "Max menu is for calculating the maximum number\n";
    cout << endl;
    cout << endl;
    int choice;

    do
    {
        string to_quit = "quit";
        cout << "0.Quit\n1.Min\n2.Max\n";
        cin >> choice;
        if (cin.fail() || cin.bad() || choice < 0 || choice > 2)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter the right choice " << endl;
            continue;
        }
        else if (choice == 0)
        {
            cout << "Thanks :)";
            break;
        }
        else if (choice == 1)
        {
            min_of_number();
        }
        else if (choice == 2)
        {
            max_of_number();
        }
    } while (choice != 999);
}