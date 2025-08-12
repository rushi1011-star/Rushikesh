#include<stdio.h>
 int main(){
     int choise,num1,num2,sum;
     
     printf("1.addition\n");
     printf("2.substration\n");
     printf("3.multiplication\n");
     printf("4.division\n");
     printf("5.exit\n");
     
     printf("enter your number:");
     scanf("%d",&choise);
     
     switch(choise){
         case 1:
         printf("enter the first number:");
         scanf("%d",&num1);
         printf("enter the second number:");
         scanf("%d",&num2);
         sum=num1+num2;
         printf("%d+%d=%d",num1,num2,sum);
         break;
         
         case 2:
         printf("enter the first number:");
         scanf("%d",&num1);
         printf("enter the second number:");
         scanf("%d",&num2);
         sum=num1-num2;
         printf("%d-%d=%d",num1,num2,sum);
         break;
         
         case 3:
         printf("enter the first number:");
         scanf("%d",&num1);
         printf("enter the second number:");
         scanf("%d",&num2);
         sum=num1*num2;
         printf("%d*%d=%d",num1,num2,sum);
         break;
         
         case 4:
         printf("enter the first number:");
         scanf("%d",&num1);
         printf("enter the second number:");
         scanf("%d",&num2);
         sum=num1/num2;
         printf("%d/%d=%d",num1,num2,sum);
         break;
         
         case 5:
         printf("exit");
         break;
         
         default:printf("invalid number");  
     }
     return 0;
 }