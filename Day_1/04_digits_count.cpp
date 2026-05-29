#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;

    if (n == 0)
    {
        cout << 1;
        return 0;
    }

    n = abs(n); // for negative number case

    int count = 0;

    while (n != 0)
    {
        n /= 10;
        count++;
    }
    cout << count;
    return 0;
}