#include <iostream>
using namespace std;

int fibonacci_elements(int term)
{
    if (term == 1)
        return 0;
    if (term == 2)
        return 1;

    return fibonacci_elements(term - 1) + fibonacci_elements(term - 2);
}
int main()
{
    int x;
    cout << "enter the number of terms in the series: ";
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        cout << fibonacci_elements(i) << " ";
    }
    cout << endl;
    return 0;
}