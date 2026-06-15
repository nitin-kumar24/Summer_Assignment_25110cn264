#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int array[5] = {554,543,234,786,999};
    int max = INT_MIN;
    int second_max = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max)
        {
            int temp = max;
            max = array[i];
            second_max = temp;
        }
    }
    cout << second_max << endl;
    return 0;
}