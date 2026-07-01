#include <iostream>
using namespace std;

int main()
{
    int pin = 1234, enteredPin, choice;
    double balance = 10000, amount;

    cout << "========== ATM Simulation ==========\n";
    cout << "Enter PIN: ";
    cin >> enteredPin;

    if(enteredPin != pin)
    {
        cout << "Incorrect PIN!\n";
        return 0;
    }

    do
    {
        cout << "\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter Amount: ";
                cin >> amount;
                if(amount > 0)
                {
                    balance += amount;
                    cout << "Money Deposited.\n";
                }
                else
                    cout << "Invalid Amount.\n";
                break;

            case 3:
                cout << "Enter Amount: ";
                cin >> amount;

                if(amount <= 0)
                    cout << "Invalid Amount.\n";
                else if(amount > balance)
                    cout << "Insufficient Balance.\n";
                else
                {
                    balance -= amount;
                    cout << "Please Collect Your Cash.\n";
                }
                break;

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    } while(choice != 4);

    return 0;
}
