#include <iostream>
using namespace std;

int main(){
    int array[10]={34,45,2,2,34,56,78,65,43,1};

    int target=2;
    int freq =0;

    for(int &x:array){
        if(x==target) freq++;
    }
    cout << freq;
    return 0;
}