#include <iostream>
using namespace std; struct Student{int roll; string name;};
int main(){Student s[50]; int n; cout<<"Students: ";cin>>n;cin.ignore(); for(int i=0;i<n;i++){cin>>s[i].roll;cin.ignore();getline(cin,s[i].name);} for(int i=0;i<n;i++) cout<<s[i].roll<<" "<<s[i].name<<endl;}