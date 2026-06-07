#include <iostream>
using namespace std;

int main()
{
    int number, power;
    cout << "enter the number and its power respectively: ";
    cin >> number >> power;

    if (power == 0)
    {
        cout << 1;
        return 0;
    }
    if (power == 1)
    {
        cout << number;
        return 0;
    }
    int answer=1;
    for(int i = 1; i<=power ; i++){
        answer*=number;
    }
    cout << answer;

    return 0;
}