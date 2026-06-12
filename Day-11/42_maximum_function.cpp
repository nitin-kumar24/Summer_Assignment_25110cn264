#include <iostream>
using namespace std;

int maximum( int &x , int & y){
    return x>y?x:y;
}

int main(){
    int a = 10 , b = 25;

    cout << maximum(a,b) << endl;
    return 0;
}