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

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;

    if (n == 0)
    {
        cout << "Yes the given number is an armstrong number" << endl;
        return 0;
    }
    int temp_num = n;
    int new_num = 0;

    int total_digits = count_digits(n);

    while (temp_num != 0)
    {
        new_num += pow(temp_num % 10, total_digits);
        temp_num /= 10;
    }

    if (new_num == n)
        cout << "Yes the given number is an armstrong number" << endl;
    else
        cout << "No the given number is not an armstrong number" << endl;

    return 0;
}
