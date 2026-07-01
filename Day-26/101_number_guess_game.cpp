#include <iostream>
#include <random>
using namespace std;


int main(){
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> dist(0,100);

    int randomNumber=dist(gen);

    int user_input;

    cout << "Guess the number (0-100): ";
    cin >> user_input;

    

    while(true){
        if(user_input<0 || user_input>100){
            cout << "Invalid Input! Game's operating range is fixed in between [0 to 100] inclusive";
            cout << endl;
            cout << "try again";
            cin >> user_input;
            continue;
        }
        if(randomNumber==user_input){
            cout << "Woah Champ! You got it";
            break;
        }
        else if(randomNumber>user_input){
            cout << "Nice going! Guess a greater number: ";
            cin >> user_input;
        }
        else{
            cout << "You are moving closer, Guess a lower number: ";
            cin >> user_input;
        }
    }
    return 0;
}