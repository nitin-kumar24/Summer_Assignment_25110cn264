#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "enter the decimal number: ";
    cin >> n;

    int binary = 0;
    int place_value = 1;
    while (n != 0)
    {
        binary += n % 2 * place_value;
        place_value *= 10;
        n /= 2;
    }

    cout << binary;
    return 0;
}