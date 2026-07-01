#include <iostream>
using namespace std;
struct Item{int id,qty; string name;};
int main(){
Item a[100]; int n=0,ch;
do{
cout<<"\n1.Add Item\n2.Display Items\n3.Exit\nChoice: ";cin>>ch;
if(ch==1){cout<<"ID Name Qty: ";cin>>a[n].id>>a[n].name>>a[n].qty;n++;}
else if(ch==2){for(int i=0;i<n;i++)cout<<a[i].id<<" "<<a[i].name<<" "<<a[i].qty<<endl;}
}while(ch!=3);
}