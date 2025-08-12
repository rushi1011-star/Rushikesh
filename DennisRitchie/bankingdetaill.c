#include<stdio.h>
int main(){
    char name[50];
    int choice;
    printf("enter your name:");
    scanf("%[^\n]", name);

    printf("1.amount withdraw\n");
    printf("2.deposit amount\n");
    printf("3.account holder details\n");
    printf("4.account balance\n");
    printf("5.exit\n");

    printf("enter your choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:{
        int withdrawamount=20000;
        printf("your amount is available on bank is:%d\n",withdrawamount);
        printf("enter your withdraw amount:");
        scanf("%d",&withdrawamount);
       
         if (withdrawamount>20000){
            printf("no money in your account");

         }
         else if(withdrawamount<=20000){
            printf("withdrawn amount is %d",withdrawamount);
         }
         else{
                printf("withdrawn amount is %d",withdrawamount);
            }
        break;
        }

        case 2:{
        int deposit;
        printf("enter your deposit amount:");
        scanf("%d",&deposit);
        printf("deposited amount is %d",deposit);
        break;
        }

        case 3:{
        printf("entered your account holder details:\n");
        printf("name:%s",name);
        printf("deposited amount = 1000");
        printf("account number=3619575636488");
        break;
        }

        case 4:{
        int balance = 1000; 
        printf("account balance details:\n");
        printf("entered your account name:%s\n",name);
        printf("your balance is:%d",balance);
        break;
        }
        
        case 5:{
        printf("exit");
        break;
        }
        
        default:printf("invalid number");
        break;
    }
    return 0;
}

