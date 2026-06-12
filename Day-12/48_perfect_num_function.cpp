#include <iostream>
using namespace std;

bool perfect_number(int n)
{
    int sum = 0;
    int i = 1;
    while (i < n)
    {
        if (n % i == 0)
            sum += i;
        i++;
    }

    return sum == n;
}

int main()
{
    int number = 54;

    cout << std::boolalpha ;
    cout << perfect_number(number) << endl;
    return 0 ;
}