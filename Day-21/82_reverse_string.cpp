#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "ShowYourDiscipline";

    string rev_s = "";

    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev_s += s[i];
    }
    s=rev_s; // modified the original string

    for (char &x : s)
    {
        cout << x;
    }
    return 0;
}