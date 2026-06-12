#include <iostream>
using namespace std;

int addition(int &x, int &y)
{
    return (x + y);
}

// main function for verification
int main()
{
    int a = 10, b = 7;
    cout << addition(a, b) << endl;
    return 0;
}