#include <iostream>
using namespace std;

int main()
{
    int arr[] = {34, 56, 73, 55, 60};

    int target = 0;
    int i;
    int index = 0;
    for (int &x : arr)
    {
        if (x == target)
        {
            cout << "the target index is: "  << index;
            return 0;
        }
        index++;
    }

    cout << "the target is not in the array" << endl;

    return 0;
}