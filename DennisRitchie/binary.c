// #include<stdio.h>
//  int main(){
//     int n,i,arr[10],search, found=0;
//     printf("enter the your arrays of number :");
//     scanf("%d",&n);

//     printf("your number is %d\n:",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter your search number :");
//     scanf("%d",&search);
//     for(i=0;i<n;i++){
//         if(arr[i]==search){
//             printf("your search number %d is found at %d\n",search,i);
//             found=1;
//             break;
//         }
//     }
//     if(!found){
//         printf("your searching value is not found\n");
//     }
//     return 0;
//  }

#include <stdio.h> 
int main() 
{ 
    int num[50],i,first,last,middle,n,search; 
    printf("\n\t\t ENTER NUMBER OF ELEMENTS : "); 
    scanf("%d",&n); 
 
    printf("\n\t\t ENTER %d NUMBERS IN ASCENDING ORDER: ",n); 
 
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&num[i]); 
    } 
 
    printf("\n\t\t ENTER NUMBER... YOU WANT TO SEARCH : "); 
    scanf("%d",&search); 
 
    first=0; 
    last=n-1; 
    middle=(first+last)/2; 
 
    while(first<=last) 
    { 
        if (num[middle]==search) 
        { 
            printf("\n\t\t %d FOUNT AT LOCATION %d ",search,middle+1); 
            break; 
        } 
        else if(num[middle]<search) 
        { 
            first=middle+1; 
        } 
        else 
        { 
            last=middle-1; 
        } 
        middle=(first+last)/2; 
    } 
 
    if(first>last) 
        printf("\n\t\t %d IS NOT PRESENT IN ARRAY ",search); 
    return 0; 
}
