#include <iostream>
using namespace std;

int factorial(int x)
{
    if (abs(x) < 2)
        return 1;
    return x * factorial(x - 1);
}
int main()
{
    int n;
    cout << "enter the number whose factorial is to be calculated: ";
    cin >> n;

    int fact = factorial(n);

    cout << fact << endl;
    return 0;
}