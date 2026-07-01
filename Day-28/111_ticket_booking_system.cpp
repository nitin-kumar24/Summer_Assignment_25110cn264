#include <iostream>
using namespace std;

int main(){
    const int totalSeats=20;
    bool seats[totalSeats]={false};

    int choice, seat;

    do{
        cout<<"\n1. Book Ticket\n2. Cancel Ticket\n3. View Seats\n4. Exit\nChoice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter Seat Number (1-20): ";
                cin>>seat;
                if(seat>=1 && seat<=20){
                    if(!seats[seat-1]){
                        seats[seat-1]=true;
                        cout<<"Ticket Booked.\n";
                    }else{
                        cout<<"Seat Already Booked.\n";
                    }
                }else{
                    cout<<"Invalid Seat Number.\n";
                }
                break;

            case 2:
                cout<<"Enter Seat Number: ";
                cin>>seat;
                if(seat>=1 && seat<=20 && seats[seat-1]){
                    seats[seat-1]=false;
                    cout<<"Booking Cancelled.\n";
                }else{
                    cout<<"Seat Not Booked or Invalid.\n";
                }
                break;

            case 3:
                for(int i=0;i<totalSeats;i++){
                    cout<<"Seat "<<i+1<<" : "<<(seats[i]?"Booked":"Available")<<endl;
                }
        }

    }while(choice!=4);

    return 0;
}
