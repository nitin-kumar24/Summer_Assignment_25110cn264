#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1,100);

    int secretNumber = dist(gen);
    int guess, attempts = 0;

    cout << "========== Number Guessing Game ==========\n";

    while(true)
    {
        cout << "\nEnter your guess (1-100): ";
        cin >> guess;
        attempts++;

        if(guess == secretNumber)
        {
            cout << "\nCongratulations!\n";
            cout << "Attempts: " << attempts << endl;
            break;
        }
        else if(guess < secretNumber)
            cout << "Too Low!\n";
        else
            cout << "Too High!\n";
    }

    return 0;
}
