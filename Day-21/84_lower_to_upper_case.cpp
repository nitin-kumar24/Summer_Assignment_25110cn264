#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "iaminevitable";

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = char(str[i]-32);
    }
    for (char x : str){
        cout << x ;

    }
    return 0;
}