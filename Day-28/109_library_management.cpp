#include <iostream>
using namespace std;

struct Book{
    int id;
    string title;
    bool issued;
};

int main(){
    Book books[100];
    int count=0, choice;

    do{
        cout<<"\n1. Add Book\n2. Issue Book\n3. Display Books\n4. Exit\nChoice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter Book ID: ";
                cin>>books[count].id;
                cin.ignore();
                cout<<"Enter Book Title: ";
                getline(cin, books[count].title);
                books[count].issued=false;
                count++;
                cout<<"Book Added.\n";
                break;

            case 2:{
                int id;
                bool found=false;
                cout<<"Enter Book ID: ";
                cin>>id;

                for(int i=0;i<count;i++){
                    if(books[i].id==id){
                        found=true;
                        if(!books[i].issued){
                            books[i].issued=true;
                            cout<<"Book Issued Successfully.\n";
                        }else{
                            cout<<"Book Already Issued.\n";
                        }
                    }
                }
                if(!found)
                    cout<<"Book Not Found.\n";
                break;
            }

            case 3:
                if(count==0){
                    cout<<"No Books Available.\n";
                }else{
                    for(int i=0;i<count;i++){
                        cout<<"\nID: "<<books[i].id;
                        cout<<"\nTitle: "<<books[i].title;
                        cout<<"\nStatus: "<<(books[i].issued?"Issued":"Available")<<"\n";
                    }
                }
        }

    }while(choice!=4);

    return 0;
}
