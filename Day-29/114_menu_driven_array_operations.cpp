#include <iostream>
using namespace std;
int main(){
int arr[100],n=0,ch,val,pos;
do{
cout<<"\n1.Create\n2.Display\n3.Insert\n4.Delete\n5.Search\n6.Exit\nChoice: ";
cin>>ch;
switch(ch){
case 1: cout<<"Size: ";cin>>n; for(int i=0;i<n;i++)cin>>arr[i]; break;
case 2: for(int i=0;i<n;i++)cout<<arr[i]<<" "; cout<<endl; break;
case 3: cout<<"Position and Value: ";cin>>pos>>val; if(pos>=1&&pos<=n+1){for(int i=n;i>=pos;i--)arr[i]=arr[i-1]; arr[pos-1]=val; n++;} break;
case 4: cout<<"Position: ";cin>>pos; if(pos>=1&&pos<=n){for(int i=pos-1;i<n-1;i++)arr[i]=arr[i+1]; n--;} break;
case 5: cout<<"Value: ";cin>>val; for(int i=0;i<n;i++) if(arr[i]==val){cout<<"Found at "<<i+1<<endl; break;}
}
}while(ch!=6);
}