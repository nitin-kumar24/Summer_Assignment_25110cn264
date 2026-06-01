#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the two numbers: ";
    cin >> a >> b;

    int n = a > b ? b : a;
    for (int i = n; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << "GCD of " << a << " & " << b << " is " << i << endl;
            break;
        }
    }
    return 0;
}