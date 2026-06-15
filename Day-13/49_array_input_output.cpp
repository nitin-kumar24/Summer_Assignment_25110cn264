#include <iostream>
using namespace std;

int main()
{
    int array_size;
    cout << "enter the size of the array: ";
    cin >> array_size;

    int array[array_size];

    cout << "enter the elements of the array ( either one by one or use buffer): ";

    for (int i = 0; i < array_size; i++)
    {
        cin >> array[i];
    }

    // for output

    for (int i = 0; i < array_size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl; // to change the line at the end

    return 0;
}