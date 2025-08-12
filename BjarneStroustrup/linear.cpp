#include<iostream>
using namespace std;
int main()
{
    int num[5],n,i,flag=0;
    cout<<"Enter the number of arrays element:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>num[i];
    }
    cout<<"Enter the number you want to search:"<<endl;
    cin>>n;
    for(i=0;i<5;i++)
    {
        if(num[i]==n)
        {
           cout<<"elemnet found at location:"<<i+1<<endl;
           flag=1;
           break;
        }
    }
    if(flag==1)
    {
        cout<<n<<"FOUND AT LOCATION:"<<i+1<<endl;
    }
    else
    {
        cout<<"element is not found in arrys..."<<endl;
    }
    return 0;
}