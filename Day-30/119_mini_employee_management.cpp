#include <iostream>
using namespace std; struct Emp{int id;string name;};
int main(){Emp e[20];int n=0,ch;do{cout<<"1.Add 2.Show 3.Exit:";cin>>ch;if(ch==1){cin>>e[n].id;cin.ignore();getline(cin,e[n].name);n++;}else if(ch==2){for(int i=0;i<n;i++)cout<<e[i].id<<" "<<e[i].name<<endl;}}while(ch!=3);}