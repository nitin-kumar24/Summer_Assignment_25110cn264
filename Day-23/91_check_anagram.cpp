#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cout << "enter two strings: ";
    cin >> s1 >> s2;

    if (s1.length() != s2.length()) //
    {
        cout << "not anagrams";
        return 0;
    }

    int freq[256] = {0};

    for (char x : s1)
    {
        freq[x]++;
    }
    for (char y : s2)
    {
        freq[y]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            cout << "the given strings are not anagrams";
            return 0;
        }
    }
    cout << "the given string are anagrams" << endl;
    return 0;
}