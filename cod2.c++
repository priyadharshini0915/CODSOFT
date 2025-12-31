#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int guess, number;

    srand(time(0));
    number = rand() % 100 + 1;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number)
        {
            cout << "Too High\n";
        }
        else if (guess < number)
        {
            cout << "Too Low\n";
        }
        else
        {
            cout << " ou guessed the number.\n";
        }

    } while (guess != number);

    return 0;
}
