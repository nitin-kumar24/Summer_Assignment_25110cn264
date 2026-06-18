#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter the size of the two arrays: ";
    cin >> n >> m;

    int array_1[n], array_2[m], union_array[n + m];

    int count = 0;

    cout << "Enter elements of array1: ";

    for (int i = 0; i < n; i++)
    {
        cin >> array_1[i];

        bool found = false;

        for (int j = 0; j < count; j++)
        {
            if (union_array[j] == array_1[i])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            union_array[count++] = array_1[i];
        }
    }

    cout << "Enter elements of array2: ";

    for (int i = 0; i < m; i++)
    {
        cin >> array_2[i];

        bool found = false;

        for (int j = 0; j < count; j++)
        {
            if (union_array[j] == array_2[i])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            union_array[count++] = array_2[i];
        }
    }

    cout << "Union array is --> ";

    for (int i = 0; i < count; i++)
    {
        cout << union_array[i] << " ";
    }

    return 0;
}