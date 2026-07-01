#include <iostream>
using namespace std;
double a,b; int ch;
int main(){
do{
cout<<"\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\nChoice: ";
cin>>ch;
if(ch>=1&&ch<=4){cout<<"Enter two numbers: ";cin>>a>>b;}
switch(ch){
case 1: cout<<"Result: "<<a+b; break;
case 2: cout<<"Result: "<<a-b; break;
case 3: cout<<"Result: "<<a*b; break;
case 4: if(b!=0) cout<<"Result: "<<a/b; else cout<<"Division by zero!"; break;
}
}while(ch!=5);
return 0;
}