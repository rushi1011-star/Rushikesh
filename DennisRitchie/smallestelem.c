#include<stdio.h>
 int main(){
    int arr[100],n,smallest,i;
    printf("Enter the arrays number:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        scanf("%d",&arr[i]);
    }
    smallest=arr[0];{
        for(i=1;i<n;i++){
            if(arr[i]<smallest){
                smallest=arr[i];
            }
        }
    }
    printf("Smallest arrys elements is:%d",smallest);
    return 0;
 }