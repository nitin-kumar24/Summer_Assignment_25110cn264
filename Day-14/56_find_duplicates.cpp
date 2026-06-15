#include <iostream>
using namespace std;

int main(){
    int array[6]={34,56,78,45,34,45};
    int freq[100]={0}; //100 is the maximum range of numbers upto which the array can have

    for(int &x : array){
        freq[x]++;
        if(freq[x] > 1) cout << x << " ";
    }
    cout << endl;
    return 0;
}