#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="I am the GOD";

    for(int i = 0 ; i<str.length();i++){
        if(str[i]==' '){
            str.erase(i,1);  //not very efficient approach but for practice..in real world,two pointers or store using new string
        }
    }
    for(char x: str){
        cout << x ;
    }
    cout << endl;
    return 0;
}