#include<stdio.h>
/*
//10 times hello world
 int main(){
    for(int i=0;i<=10;i++){
        printf("Hello World\n");
    }
    return 0;
 }
 */

//input user looping
// this program will print hello rushikesh n times
// int main(){
//     int input;
//     printf("Enter a number: ");
//     scanf("%d", &input);

//     for(int i=1;i<=(input);i++){
//         printf("hello rushikesh\n");
    
//     }
//     return 0;
// }

/*
//scope of variable
int main(){
    int i;
    //scope of variable(means loop madhe yevdh asnar)
    for( i=1;i<=5;i++){
        printf("hello rcc/n");

    }
    printf("%d", i); // i will be 6 here because the loop has ended
    return 0;
}
/*
/*
//printing numbers from 1 to 100
int main(){
    int i;
    for(i=1;i<=100;i++){
        printf("%d ", i);
    }
    printf("%d",i);
    return 0; 
}
*/
/*
//printing of even numbers from 1 to 100
int main(){
    int i;
    for(i=2;i<=100;i=i+2){
        printf("%d ", i);
    }
    return 0;   
}
*/
/*
//printing of odd numbers from 1 to 50
int main(){
    int i;
    for (i=1;i<=50;i=i+2){
        printf("%d ", i);
    }     
    return 0;  
}
*/
/*
//use looping print table 19
#include<stdio.h>
 int main(){
     int i;
     for(i=19;i<=190;i=i+19){
     printf("%d ",i);
 }
 return 0;
 }
*/
/*
//use looping print table 20    
int main(){
    int i;
    for(i=20;i<=200;i=i+20){
        printf("%d ",i);
    }
    return 0;
}
*/
/*

//use looping print odd numbers from 1 to n
int main(){
    int rush;
    printf("enter your number:");
    scanf("%d",&rush);
    for(int i=1;i<=2*rush-1;i=i+2){
        printf("%d ",i);
    }
    return 0;
}
*/
/*
#include<stdio.h>
 int main(){
     int n,i;
     printf("enter the your number:");
     scanf("%d",&n);
     for(i=4;i<=2*n-1;i=i+3){
         printf("%d",i);
     }
     return 0;
 }
*/
/*
//display on 1,2,4,8,

 int main(){
     int n,i;
     printf("enter your number:");
     scanf(" %d",&n);

     for(i=1;i<=n;i=2*i){
         printf("%d",i);
        
         
     }
     return 0;
 }

//reverse 100

 int main(){
     int i,a=100;
     for(i=1;a>0;i++){
         
        a=a-2;
        printf(" %d",a);
     }
     return 0;
 }


//check prime or compositive number

/*
int main(){
    int j; (garbage value which is defined on computer)
    while(j<=10);
    printf("%d",j);
    j++;
}
*/
/*
//counting number of digits in a number
int main(){
    int n;
    printf("enter the your number:");
    scanf("%d",n);
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
        }
        printf("the number of digit is %d",count);
    
   return 0;
}
*/
/*
int main(){
    int i,sum=0,n;
    printf("enter your number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum:%d",sum);
    return 0;
}
*/
/*
int main(){
    int i;
    i=10;
    while(i<2){
        printf("%d",i);
        ++i;//then we use i++ when it is increasing order
    }
    return 0;
}
*/
