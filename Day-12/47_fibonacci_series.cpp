#include <iostream>
using namespace std;

void fibonacci(int total_elements)
{
    int element_1 = 0;
    int element_2 = 1;
    if (total_elements == 1)
    {
        cout << element_1 << endl;
        return ;
    }
    if (total_elements >= 2)
        cout << element_1 << " " << element_2 << " ";

        
    for (int i = 3; i <= total_elements; i++)
    {
        int temp = element_1;
        element_1 = element_2;
        element_2 = element_2 + temp;
        cout << element_2 << " ";
    }
}

int main()
{
    int element_count = 0;
    fibonacci(element_count);

    return 0;
}