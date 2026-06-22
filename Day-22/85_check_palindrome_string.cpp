#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "enter the input string: ";
    cin >> s;

    int l = s.length();
    int i = 0;
    int j = l - 1;

    while (i <= l / 2 && s[i] == s[j])
    {
        i++;
        j--;
    }
    i > l / 2 ? cout << "string is a palindrome " : cout << " string isn't a palindrome";
    return 0;
}