#include<iostream>
using namespace std;
int main()
{
    int arr[5],even=0,odd=0,i;
    cout<<"Enter the arrys number:"<<endl;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"the even number is prent in arrays is:"<<even<<endl;
    cout<<"the odd number is present in arrays is:"<<odd<<endl;
    return 0; 
}