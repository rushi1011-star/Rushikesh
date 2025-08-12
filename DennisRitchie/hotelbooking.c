#include<stdio.h>
 int main(){
    char name[50];
    int book,choise;
    float time;
    printf("enter your name:");
    scanf("%s",name);
    
    printf("enter your booking number:\n ");
    scanf("%d",&book);
    printf("1.first class room\n");
    printf("2.second class room\n");
    printf("3.common room\n");
    printf("4.function holl\n");
    printf("5.exit\n");
    
    printf("enter your choise number:\n");
    scanf("%d",&choise);

    switch(choise){
        case 1:
        printf("%s\n",name);
        printf("%d\n",book);
        printf("your choise is first class room");
        printf("enter your use of time on this room:");
        scanf("%f",&time);
        printf("thank you for first class room booking");
        break;

        case 2:
        printf("%s\n",name);
        printf("%d\n",book);
        printf("your choise is second class room");
        printf("enter your use of time on this room:");
        scanf("%f",&time);
        printf("thank you for second class room booking");
        break;

        case 3:
        printf("%s\n",name);
        printf("%d\n",book);
        printf("your choise is common room");
        printf("enter your use of room time:");
        scanf("%f",&time);
        printf("thank you for common room booking");
        break;

        case 4:
        printf("%s\n",name);
        printf("%d\n",book);
        printf("enter your use of time on this function holl:");
        scanf("%f",&time);
        printf("your choise is function holl");
        printf("thank you for function holl booking");
        break;

        case 5:
        printf("exit");
        break;

        default:
        printf("invalide number");
        break;
           
        
        
    }
    printf("your name is %s\n",name);
    printf("your booking number is %d\n",book);
    printf("your use of time is %.2f\n",time);
    return 0;
 }