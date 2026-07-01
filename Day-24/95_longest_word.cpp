// assuming there are no leading spaces and special characters(even if there is, it is used after a space) in the sentence, and even if it is this code works but runtime increases

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "enter the sentence: ";
    getline(cin, s);

    string word;
    string longest_word;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            word += s[i];
        }
        else
        {
            if (word.length() > longest_word.length())
            {
                longest_word = word;
            }
            word="";
        }
    }
    if (word.length() > longest_word.length())
    longest_word = word;

    cout << longest_word << endl;
    return 0;
}