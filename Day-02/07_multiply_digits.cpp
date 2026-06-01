#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;

    if (n == 0)
    {
        cout << "Product = 0";
        return 0;
    }

    int product = 1;
    while (n != 0)
    {
        product *= n % 10;
        n /= 10;
    }
    cout << "product = " << product;
    return 0;
}