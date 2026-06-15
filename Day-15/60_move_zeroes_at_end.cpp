#include <iostream>
using namespace std;

int main()
{
    int array[10] = {0,0,34,56,0,39,98,0,0,32};

    int i = 0;
    int j = 9;
    while (i < j)
    {
        if (array[i] == 0)
        {
            if (array[j] != 0)
            {
                swap(array[i], array[j]);
                i++;
                j--;
            }
            else
            {
                j--;
            }
        }
        else
        {
            i++;
        }
    }

    for (int &x : array)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}