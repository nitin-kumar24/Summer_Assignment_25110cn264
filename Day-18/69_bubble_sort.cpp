#include <iostream>
using namespace std;
void bubble_sort(int arr[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        bool is_swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                is_swapped = true;
            }
        }
        if (!is_swapped)
            break;
    }
}
int main()
{
    int n;
    cout << "enter the size(no. of elements) of the array: ";
    cin >> n;

    int arr[n];
    cout << "enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr, n);

    cout << "sorted array : ";
    for (int &x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}