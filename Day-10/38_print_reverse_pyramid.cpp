#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i<=5 ; i++){
        for (int j = 1 ; j<=9; j++){
            if(j<=5){
                if(j<=i-1) cout << " ";
                else cout << "*";
            }
            else{
                if(j<=9-i+1) cout << "*";
                else cout << " ";  //again its optional (for padding )
            }
        }
        cout << "\n";
    }
}