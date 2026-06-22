#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "enter the sentence: ";
    getline(cin,str); // for getting the input with spaces in between words

    int word_count=1;

    for(char x:str){
        if(x==' ') word_count++;
    }

    cout << "total number of words = " << word_count;

    return 0;
}