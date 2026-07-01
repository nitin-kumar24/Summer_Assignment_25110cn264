#include <iostream>
using namespace std;

int main(){
    string name;
    double balance=0, amount;
    int choice;

    cout<<"Enter Account Holder Name: ";
    getline(cin,name);

    do{
        cout<<"\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Current Balance: Rs. "<<balance<<endl;
                break;

            case 2:
                cout<<"Enter Amount: ";
                cin>>amount;
                if(amount>0){
                    balance+=amount;
                    cout<<"Deposit Successful.\n";
                }else{
                    cout<<"Invalid Amount.\n";
                }
                break;

            case 3:
                cout<<"Enter Amount: ";
                cin>>amount;
                if(amount<=balance && amount>0){
                    balance-=amount;
                    cout<<"Withdrawal Successful.\n";
                }else{
                    cout<<"Insufficient Balance or Invalid Amount.\n";
                }
                break;
        }

    }while(choice!=4);

    return 0;
}
