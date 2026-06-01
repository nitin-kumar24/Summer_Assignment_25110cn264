#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter the number: ";
    cin >> n;

    bool isprime = true; // using boolean flag so that i don't have to handle the edgecase n==2 seperately
    if (n < 2)
    {
        isprime = false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            isprime = false;
    }
    if (isprime)
        cout << "Yes , the given number is prime." << endl;
    else
        cout << "No , the given number is not prime." << endl;
    return 0;
}