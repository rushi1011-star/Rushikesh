#include<iostream>
using namespace std;
int main(){
    int i,n,l;
    cout<<"Enter the first arrays element:"<<endl;
    cin>>n;
    cout<<"Enter the second array element"<<endl;
    cin>>l;
    if(n>l)
    {
    for(i=n;i>=l;i--)
    {
        cin>>i;
    }
    for(i=n;i<=l;i++)
    {
        cout<<i<<endl;
    }
    }
    return 0;
}