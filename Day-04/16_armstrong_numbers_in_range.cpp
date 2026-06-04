#include <iostream>
#include <cmath>
using namespace std;

int count_digits(int x)
{
    if (x == 0)
        return 1;

    int count = 0;
    while (x != 0)
    {
        x /= 10;
        count++;
    }
    return count;
}

bool is_armstrong_number(int num, int total_digits)
{
    if (num == 0)
        return true;

    int temp_num = num;
    int new_num = 0;

    while (temp_num != 0)
    {
        new_num += pow(temp_num % 10, total_digits);
        temp_num /= 10;
    }
    return new_num == num;
}

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        int digits_count = count_digits(i);

        if (is_armstrong_number(i, digits_count))
            cout << i << " ";
    }

    return 0;
}