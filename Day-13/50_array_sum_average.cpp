#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10,23,45,65,34};

    int sum = 0;

    for(int &x: arr){
        sum+=x;
    }
    
    float average = sum/5.0;

    cout << "the sum is: " << sum << "\n" << "the average is: " << average << endl;

    return 0;
}