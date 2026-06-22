#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="adcdksjbhfbqwndjkcnds";
    char target='d';
    int freq=0;

    for(char x: str){
        if(x==target) freq++;

    }
    cout << "the frequency of the " << target << " is " <<freq << endl;

}