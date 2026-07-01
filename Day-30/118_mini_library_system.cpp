#include <iostream>
using namespace std; struct Book{int id;string title;};
int main(){Book b[20];int n=0,ch;do{cout<<"1.Add 2.Show 3.Exit:";cin>>ch;if(ch==1){cin>>b[n].id;cin.ignore();getline(cin,b[n].title);n++;}else if(ch==2){for(int i=0;i<n;i++)cout<<b[i].id<<" "<<b[i].title<<endl;}}while(ch!=3);}