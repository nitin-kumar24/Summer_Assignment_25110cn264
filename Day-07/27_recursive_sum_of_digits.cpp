#include <iostream>
using namespace std;

int sum_of_digits(int number){
    if(abs(number)<10) return number;
    
    return number%10+sum_of_digits(number/10);
}

int main(){
    int n;
     cout << "enter the number: ";
     cin >> n;

    int digits_sum=sum_of_digits(n);
    cout << digits_sum;

    return 0;
}