#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter the number: ";
    cin >> n;

    for (int j = 2; j < n; j++)
    {
        bool isprime = true;

        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
                isprime = false;
        }
        if (isprime)
            cout << j << " ";
    }
    return 0;
}