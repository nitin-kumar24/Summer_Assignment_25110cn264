#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the term number: ";
    cin >> n;

    int f1 = 0;
    int f2 = 1;

    if (n == 1)
        cout << f1 << endl;
    else if (n == 2)
        cout <<  f2 << endl;
    else
    {
        // cout << f1 << " " << f2 << " ";
        for (int i = 3; i <= n; i++)
        {
            // cout << f1 + f2 << " ";
            int temp = f1;
            f1 = f2;
            f2 = temp + f2;
        }
        cout << f2 << endl;
    }
    return 0;
}