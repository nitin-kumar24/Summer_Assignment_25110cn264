#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {{1,2,3}, {2, 5, 6}, {3, 6, 9}};

    int transpose_matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose_matrix[j][i] = matrix[i][j];
        }
    }
    bool is_symmetric = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] != transpose_matrix[i][j])
                is_symmetric = false;
            break;
        }
    }
    is_symmetric ? cout << "the give matrix is symmetric" : cout << "the given matrix is not symmetric";

    return 0;
}