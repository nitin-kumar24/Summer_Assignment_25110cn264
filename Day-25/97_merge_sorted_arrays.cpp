
//assumming this problem is same as leetcode's #88 merge two sorted arrays because the language in asssignment is TOO concise to make a conclusion

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = n - 1;
        int j = m - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums2[i] < nums1[j]) {
                nums1[k] = nums1[j];
                j--;
            } else {
                nums1[k] = nums2[i];
                i--;
            }
            k--;
        }

        while (i >= 0) {
            nums1[k] = nums2[i];
            i--;
            k--;
        }
    }
};

int main() {
    int m, n;
    cin >> m >> n;

    vector<int> nums1(m + n), nums2(n);

    for (int i = 0; i < m; i++)
        cin >> nums1[i];

    for (int i = 0; i < n; i++)
        cin >> nums2[i];

    Solution obj;
    obj.merge(nums1, m, nums2, n);

    for (int x : nums1)
        cout << x << " ";

    return 0;
}