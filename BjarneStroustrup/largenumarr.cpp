#include<iostream>
using namespace std;
int main(){
    int arr[5],i,large;
    cout<<"Enter the arrays element:"<<endl;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    large=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    cout<<"largest element present in arrays is:"<<large<<endl;
    return 0;
}