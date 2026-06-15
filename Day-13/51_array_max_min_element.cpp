#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int arr[] = {10,23,45,65,34};

    int mx=INT_MIN;
    int mn = INT_MAX;

    for(int &x: arr){
        mx=max(mx,x);
        mn =min(mn,x);
    }
    
    

    cout << "the maximum element is: " << mx << "\n" << "the minimum element is: " << mn << endl;

    return 0;
}