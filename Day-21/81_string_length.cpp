#include<iostream>
using namespace std;

int main(){
    string s="quickbrownfoxjumpsoverthelazydog";
    int length=0;
    int i =0;
    while(s[i]!=('\0')){ //('\0') is a null pointer that ends any string in cpp
        i++;
        length++;
    }
    cout << length << endl;
    return 0;
}