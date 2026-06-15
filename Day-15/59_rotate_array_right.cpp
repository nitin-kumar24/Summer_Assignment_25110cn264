#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int array[6] = {34, 56, 98, 34, 67, 55};

    int rotating_factor;
    cout << "enter the number of times of rotation: ";
    cin >> rotating_factor;

    int result_arr[6];
    cout << "the rotated array is: ";
    for (int i = 0; i < 6; i++)
    {
        result_arr[i] = array[(i + 6 - rotating_factor) % 6];
        cout << result_arr[i] << " ";
    }
}