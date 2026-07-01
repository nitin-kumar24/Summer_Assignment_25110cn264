#include <iostream>
#include <string>

using namespace std;

string compress_string(string s)
{
    string temp = s;
    string new_str;
    int count = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
            count++;
        else
        {
            new_str.append(s[i]);
            new_str.append(count + '0');
            count = 1;
        }
    }
}