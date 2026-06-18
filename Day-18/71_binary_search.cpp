#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void my_binary_search(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            cout << "element found";
            return;
        }
        else if (nums[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << "element not found " << endl;
    return;
}

int main()
{
    int n, target;
    cout << "enter the size(no. of elements) of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    cout << "enter the target element: ";
    cin >> target;
    my_binary_search(arr, target);

    return 0;
}