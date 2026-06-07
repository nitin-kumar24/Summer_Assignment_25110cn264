#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the binary number(zeroes and ones): "; // here decimal input number is treated as binary
    cin >> n;

    int decimal = 0;
    int multiplier = 1; // 1 i.e equals to 2 raised to the power 0
    while (n != 0)
    {
        decimal += (n % 10) * multiplier;
        multiplier *= 2;
        n /= 10;
    }
    cout << decimal;
    return 0;
}