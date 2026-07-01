
//assuming the array is sorted already

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[k - 1]) {
            arr[k] = arr[i];
            k++;
        }
    }

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}