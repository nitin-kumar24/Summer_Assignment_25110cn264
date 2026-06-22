#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "quickbrownfoxjumpsoverthelazydog";
    
    int vowel = 0;
    int consonant = 0;

    for (char &x : s)
    {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        {
            vowel++;
        }
        else
            consonant++;
    }
    cout << "number of vowels are : " << vowel << endl;
    cout << "number of consonants are : " << consonant << endl;
}
