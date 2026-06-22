#include <iostream>
using namespace std;

int main(){
    int matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}}, matrix2[3][3]={{9,8,7},{6,5,4},{3,2,1}};
    int prodcut_matrix[3][3]={0};

    for(int i = 0 ; i <3 ; i++){
        for (int j = 0 ; j <3 ; j++){
            for(int k = 0 ; k<3 ; k++){
                prodcut_matrix[i][j]+=matrix1[i][k]*matrix2[k][i];

            }
        }
    }
    cout << "the product matrix is :" << endl;
    for(int (&row)[3]: prodcut_matrix){
        for(int &x : row){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}