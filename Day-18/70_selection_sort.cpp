#include <iostream>
using namespace std;

void selection_sort(int arr[], int &n){
    for(int i = 0 ; i < n-1; i++){
        int min_index=i;
        for(int j = i+1;j<n; j++){
            if(arr[min_index]> arr[j]) min_index=j;
        }
        if(min_index!=i) swap(arr[min_index], arr[i]);

    }
    return;
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
    selection_sort(arr, n);

    cout << "sorted array : ";
    for (int &x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}