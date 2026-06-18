#include <iostream>
using namespace std;

int main(){
    int array[7]={34,56,74,3,34,56,56}; //integers between 0-100
    int freq[101]={0}; //size is dependent on the range of integers inside the array

    for(int &x: array){
        freq[x]++;
    }
    int max_freq=0;
    int max_freq_element;
    
    for(int i = 0 ; i <101 ; i++){
        if(max_freq<freq[i]){
            max_freq=freq[i];
            max_freq_element=i;
        }
    }

    cout << "the element having maximum frequency of " << max_freq << " is " << max_freq_element << endl;

    return 0;
        
}