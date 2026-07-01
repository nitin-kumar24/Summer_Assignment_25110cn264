#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "abcdefghiijkhgse";
    int freq[256] = {0};

    for (char x : str)
    {
        freq[x]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i]>1)
        {
            cout << "the first repeating character is " << char(i);
            break;
        }
    }
    return 0;
}