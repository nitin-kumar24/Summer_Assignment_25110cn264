#include <iostream>
using namespace std;

int main(){
    int array[10]={3,4,5,6,2,7,1,8,3,5};
    int target;
    cout << "enter the target sum for which pairs are required: ";
    cin >> target;

    for(int i = 0 ; i<9;i++){
        for(int j = i+1; j<10; j++){
            if((array[i]+array[j])==target){
                cout << "(" << array[i] << "," << array[j] <<")" << " ";
            }
        }
        
    }
    return 0;
}