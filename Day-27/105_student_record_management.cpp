#include <iostream>
using namespace std;

struct Student{
    int id;
    string name;
    int age;
};

int main(){
    Student s[100];
    int count=0,choice;

    do{
        cout<<"\n1.Add Student\n2.Display Students\n3.Search Student\n4.Exit\nChoice: ";
        cin>>choice;

        switch(choice){
        case 1:
            cout<<"Enter ID: "; cin>>s[count].id;
            cin.ignore();
            cout<<"Enter Name: "; getline(cin,s[count].name);
            cout<<"Enter Age: "; cin>>s[count].age;
            count++;
            cout<<"Student Added!\n";
            break;
        case 2:
            for(int i=0;i<count;i++){
                cout<<"\nID: "<<s[i].id<<"\nName: "<<s[i].name<<"\nAge: "<<s[i].age<<"\n";
            }
            if(count==0) cout<<"No Records.\n";
            break;
        case 3:{
            int id; bool found=false;
            cout<<"Enter ID: "; cin>>id;
            for(int i=0;i<count;i++){
                if(s[i].id==id){
                    cout<<"Name: "<<s[i].name<<"\nAge: "<<s[i].age<<"\n";
                    found=true;
                }
            }
            if(!found) cout<<"Student Not Found.\n";
            break;}
        }
    }while(choice!=4);
    return 0;
}
