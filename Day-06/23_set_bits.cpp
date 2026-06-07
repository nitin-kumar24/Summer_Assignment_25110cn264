// set bits are the bits who are represented as 1 in the number's binary represntation
#include <iostream>
#include <algorithm>
using namespace std;
string dec_to_binary(int decimal)
{
    string binary = "";

    while (decimal != 0)
    {
        binary += char(decimal % 2 + '0');
        decimal /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main()
{
    int n;
    cout << "enter the decimal number: ";
    cin >> n;

    string binary = dec_to_binary(n);

    int set_bit_count = 0;
    for (char &x : binary)
    {
        if (x == '1')
            set_bit_count++;
    }
    cout << set_bit_count;
    return 0;
}