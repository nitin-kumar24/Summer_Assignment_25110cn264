#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "========== Voting Eligibility System ==========\n\n";
    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    if(age >= 18)
        cout << "\n" << name << " is Eligible to Vote.\n";
    else
    {
        cout << "\n" << name << " is NOT Eligible to Vote.\n";
        cout << "You can vote after " << 18 - age << " year(s).\n";
    }

    return 0;
}
