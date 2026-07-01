#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    cout << "Common characters: ";

    for (int i = 0; i < s1.length(); i++) {
        bool found = false;

        for (int j = 0; j < s2.length(); j++) {
            if (s1[i] == s2[j]) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << s1[i] << " ";
        }
    }

    return 0;
}