#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 4> arr = {45, 26, 46, 55};
    int even_count = 0;
    int odd_count = 0;
    for (int &x: arr)
    {
        if (x % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    cout << even_count << " even numbers & " << odd_count << " odd numbers" << endl;
    return 0;
}