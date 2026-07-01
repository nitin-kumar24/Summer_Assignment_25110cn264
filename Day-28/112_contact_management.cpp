#include <iostream>
using namespace std;

struct Contact{
    string name;
    string phone;
};

int main(){
    Contact contacts[100];
    int count=0, choice;

    do{
        cout<<"\n1. Add Contact\n2. Search Contact\n3. Display Contacts\n4. Exit\nChoice: ";
        cin>>choice;
        cin.ignore();

        switch(choice){
            case 1:
                cout<<"Enter Name: ";
                getline(cin,contacts[count].name);
                cout<<"Enter Phone Number: ";
                getline(cin,contacts[count].phone);
                count++;
                cout<<"Contact Saved.\n";
                break;

            case 2:{
                string search;
                bool found=false;
                cout<<"Enter Name: ";
                getline(cin,search);

                for(int i=0;i<count;i++){
                    if(contacts[i].name==search){
                        cout<<"Phone: "<<contacts[i].phone<<endl;
                        found=true;
                    }
                }

                if(!found)
                    cout<<"Contact Not Found.\n";
                break;
            }

            case 3:
                if(count==0){
                    cout<<"No Contacts.\n";
                }else{
                    for(int i=0;i<count;i++){
                        cout<<"\n"<<contacts[i].name<<" - "<<contacts[i].phone<<endl;
                    }
                }
        }

    }while(choice!=4);

    return 0;
}
