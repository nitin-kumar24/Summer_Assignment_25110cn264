#include <iostream>
using namespace std;

bool is_palindrome(int n)
{ // assuming that the question is talking about palindrome number not palindrome string
    int rev_num = 0;

    while (n != 0)
    {
        rev_num = rev_num * 10 + n % 10;
        n /= 10;
    }

    return rev_num == n ? true : false;
}

int main()
{
    int x = 1345431;

    cout << std::boolalpha; // for changing the output format of boolean function (from 1/0 --> true/false)
    cout << is_palindrome(x) << endl;
    return 0;
}