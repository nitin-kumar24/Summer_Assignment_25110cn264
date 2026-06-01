#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the two numbers: ";
    cin >> a >> b;

    int n = a > b ? a : b;

    for (int i = n; i <= (a * b); i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            cout << "LCM is: " << i << endl;
            break;
        }
    }
    return 0;
}