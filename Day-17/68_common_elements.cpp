#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "enter the size of the two arrays : ";
    cin >> n >> m;

    int array_1[n], array_2[m];

    cout << "enter the elements of the array1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array_1[i];
    }

    cout << "enter the elements of the array2: ";
    for (int i = 0; i < m; i++)
    {
        cin >> array_2[i];
    }
    cout << "the common elements are: ";
    for (int i = 0; i < n; i++)
    {
        int target = array_1[i];
        for (int j = 0; j < m; j++)
        {
            if (target == array_2[j])
            {
                cout << target << " ";
                break;
            }
        }
    }

    return 0;
}