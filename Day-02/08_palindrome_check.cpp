#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;

    int num = n; //storing original number for latter comparison
    int rev_num = 0;
    while (n != 0)
    {
        rev_num = rev_num * 10 + (n % 10);
        n /= 10;
    }
    if (rev_num == num)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}