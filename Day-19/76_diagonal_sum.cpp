#include <iostream>
using namespace std;

int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6,},{7,8,9,}};

    // diagonal sum
    int sum = 0 ;

    for (int i = 0 ; i <3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            if(i==j || abs(i-j)==2){
                sum+=matrix[i][j];
            }
        }
    }
    cout << "the diagonal sum is equals to: " << sum << endl;
    return 0;
}