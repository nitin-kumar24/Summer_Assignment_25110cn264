#include <iostream>
using namespace std;

int main(){
    int array[5]={56,45,34,23,67};

    int i = 0;
    int j = 4; //last element index;

    while(i<j){
        swap(array[i],array[j]);
        i++;
        j--;
    }
    cout << " reversed array is: ";
    for(int &x : array){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}