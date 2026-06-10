#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i<=5 ; i++){
        for(int j = 1 ; j<=9; j++){
            if(j<=5){
                if(j<=5-i) cout << " ";
                else cout << char(j-5+i+'A'-1);
            }
            else{
                if(j<=i+5-1) cout << char(i-(j%5)+'A'-1);
                // else cout << " "; // this is optional,(for padding after end of stars)
            }
        }
        cout << "\n";
    }
}