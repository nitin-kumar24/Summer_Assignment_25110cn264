#include <iostream>
#include <vector>
using namespace std;

void descending_sort(vector<int> &nums){
    int n = nums.size();
    for(int i = 0 ; i<n ; i++){
        int key=nums[i];
        int j = i-1;
        while(j>=0 && key>nums[j]){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
}

int main()
{
    int n;
    cout << "enter the size(no. of elements) of the array: ";
    cin >> n;

    vector<int>arr(n);
    cout << "enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    descending_sort(arr);

    cout << "sorted array : ";
    for (int &x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}