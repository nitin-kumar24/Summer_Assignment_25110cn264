#include <iostream>
using namespace std;

struct Employee{
    int id;
    string name;
    string department;
};

int main(){
    Employee e[100];
    int count=0,choice;

    do{
        cout<<"\n1.Add Employee\n2.Display Employees\n3.Exit\nChoice: ";
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Enter ID: "; cin>>e[count].id;
            cin.ignore();
            cout<<"Enter Name: "; getline(cin,e[count].name);
            cout<<"Enter Department: "; getline(cin,e[count].department);
            count++;
            break;
        case 2:
            if(count==0) cout<<"No Records.\n";
            for(int i=0;i<count;i++){
                cout<<"\nID: "<<e[i].id<<"\nName: "<<e[i].name<<"\nDepartment: "<<e[i].department<<"\n";
            }
            break;
        }
    }while(choice!=3);
    return 0;
}
