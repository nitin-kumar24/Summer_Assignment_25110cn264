#include <iostream>
using namespace std;
struct Student{int roll;string name;float marks;};
Student s[100];int n=0;
void add(){cout<<"Roll Name Marks: ";cin>>s[n].roll>>s[n].name>>s[n].marks;n++;}
void show(){for(int i=0;i<n;i++)cout<<s[i].roll<<" "<<s[i].name<<" "<<s[i].marks<<endl;}
int main(){int ch;do{cout<<"\n1.Add\n2.Display\n3.Exit\nChoice: ";cin>>ch;if(ch==1)add();else if(ch==2)show();}while(ch!=3);}