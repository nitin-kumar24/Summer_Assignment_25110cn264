#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number whose factorial has to be calculated: ";
    cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    cout << factorial << endl;
    return 0;
}