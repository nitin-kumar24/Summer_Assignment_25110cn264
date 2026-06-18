#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "enter the size of the two arrays which needs to be merged: ";
    cin >> n >> m;

    int array_1[n], array_2[m], merged_array[n + m];

    cout << "enter the elements of the array1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array_1[i];
        merged_array[i] = array_1[i];
    }

    cout << "enter the elements of the array2: ";
    for (int i = 0; i < m; i++)
    {
        cin >> array_2[i];
        merged_array[i + n] = array_2[i];
    }
    cout << "the merged array is --> ";
    for (int &x : merged_array)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}