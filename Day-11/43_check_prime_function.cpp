#include <iostream>
using namespace std;

bool isprime(int &n)
{
    if (n < 2)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int x = 19;

    isprime(x) ? cout << "true" << endl : cout << "false" << endl;
    return 0;
}