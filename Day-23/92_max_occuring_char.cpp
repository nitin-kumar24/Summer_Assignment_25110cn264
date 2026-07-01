#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    cout << "enter the string: ";
    cin >> s1;

    int freq[256] = {0};

    for (char x : s1)
    {
        freq[x]++;
    }
    int max_freq = 0;
    char max_freq_element;
    for (int i = 0; i < 256; i++)
    {
        if (max_freq < freq[i])
        {
            max_freq = freq[i];
            max_freq_element = char(i);
        }
    }
    cout << "the maximum occuring element is " << max_freq_element << "(" << max_freq << " times)" << endl;
    return 0;
}