#include <iostream>
#include <cmath> // for using pow() function
using namespace std;

int count_digits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

bool is_armstrong(int n, int total_digits)
{
    int new_num = 0;
    int temp_num = n;

    while (n != 0)
    {
        new_num += pow(n % 10, total_digits);
        n /= 10;
    }
    return new_num == temp_num;
}

int main()
{
    int number = 153;  
    int digit_count = count_digits(number);

    cout << std::boolalpha;
    cout << is_armstrong(number, digit_count) << endl;

    return 0;
}
