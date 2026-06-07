#include <iostream>
#include <cmath>
using namespace std;

int count_digits(int n)
{
    if (abs(n) < 10)
        return 1;

    return 1 + count_digits(n / 10);
}

int reverse_number(int number)
{
    if (abs(number) < 10)
        return number;

    int digits = count_digits(number);

    return (number % 10) * pow(10, digits - 1)
           + reverse_number(number / 10);
}

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    int rev_num = reverse_number(n);

    cout << rev_num;

    return 0;
}