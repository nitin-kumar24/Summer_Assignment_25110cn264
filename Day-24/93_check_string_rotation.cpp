#include <iostream>
#include <string>
using namespace std;

bool is_rotation(string &s1, string &s2)
{
    if (s1.length() != s2.length())
        return false;

    string temp = s1 + s1;

    return temp.find(s2) != string::npos;
}
int main()
{
    string a, b;
    cout << " enter the strings a and b : ";
    cin >> a >> b;

    is_rotation(a, b) ? cout << "Yes the string \"" << b << "\" is a rotation of string \"" << a << "\"" << endl : cout << "no the given strings are not rotation of each other" << endl;

    return 0;
}