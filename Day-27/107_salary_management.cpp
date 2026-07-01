#include <iostream>
using namespace std;

int main(){
    string name;
    double basic,hra,da,total;

    cout<<"Enter Employee Name: ";
    getline(cin,name);

    cout<<"Enter Basic Salary: ";
    cin>>basic;

    hra=basic*0.20;
    da=basic*0.10;
    total=basic+hra+da;

    cout<<"\nEmployee: "<<name;
    cout<<"\nBasic Salary: "<<basic;
    cout<<"\nHRA: "<<hra;
    cout<<"\nDA: "<<da;
    cout<<"\nTotal Salary: "<<total<<endl;

    return 0;
}
