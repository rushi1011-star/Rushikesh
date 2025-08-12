#include<stdio.h>
#include<string.h>

// int main(){
//     int a, sum = 0, rem;
//     printf("Enter your number: ");
//     scanf("%d", &a);
//     do{
//         rem=a % 10;
//         a=a/10;
//         sum=rem + sum;
//     }
//     while(a > 0);
//     printf("%d\n",sum);
//     return 0;
// }

int main(){
    char num[50];
    printf("enter your number:");
    scanf("%d",&num);
    int str=strrev(num);
    printf("%d",str);
    }


