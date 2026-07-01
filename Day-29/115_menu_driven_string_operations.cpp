#include <iostream>
#include <algorithm>
using namespace std;
int main(){
string s1,s2; int ch;
cout<<"Enter String: "; getline(cin,s1);
do{
cout<<"\n1.Length\n2.Reverse\n3.Append\n4.Compare\n5.Exit\nChoice: ";cin>>ch;cin.ignore();
switch(ch){
case 1: cout<<s1.length()<<endl; break;
case 2:{string t=s1; reverse(t.begin(),t.end()); cout<<t<<endl; break;}
case 3: cout<<"Enter second string: "; getline(cin,s2); s1+=s2; cout<<s1<<endl; break;
case 4: cout<<"Enter second string: "; getline(cin,s2); cout<<(s1==s2?"Equal":"Not Equal")<<endl; break;
}
}while(ch!=5);
}