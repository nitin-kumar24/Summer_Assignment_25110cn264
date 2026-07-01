#include <iostream>
using namespace std;

int main(){
    string name;
    int m1,m2,m3,m4,m5,total;
    double percentage;

    cout<<"Enter Student Name: ";
    getline(cin,name);

    cout<<"Enter Marks of 5 Subjects:\n";
    cin>>m1>>m2>>m3>>m4>>m5;

    total=m1+m2+m3+m4+m5;
    percentage=total/5.0;

    cout<<"\n----- Marksheet -----\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Total Marks: "<<total<<"/500\n";
    cout<<"Percentage: "<<percentage<<"%\n";

    if(percentage>=90)
        cout<<"Grade: A+\n";
    else if(percentage>=75)
        cout<<"Grade: A\n";
    else if(percentage>=60)
        cout<<"Grade: B\n";
    else if(percentage>=40)
        cout<<"Grade: C\n";
    else
        cout<<"Grade: Fail\n";

    return 0;
}
