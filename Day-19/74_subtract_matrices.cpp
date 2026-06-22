#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int nums1[3][3], nums2[3][3];
    cout << "enter the elements of the first (3x3) matrix: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> nums1[i][j];
        }
    }
    cout << "enter the elements of the second (3x3) matrix: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> nums2[i][j];
        }
    }
    int subtracted_matrix[3][3];

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3; j++){
            subtracted_matrix[i][j]=nums1[i][j]-nums2[i][j];
            cout << subtracted_matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}