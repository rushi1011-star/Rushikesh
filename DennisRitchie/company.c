
#include<stdio.h>
 int main(){
    char name[50];
    int choice,percentage,cgpa;
    printf("enter your name :");
    scanf("%[^\n]",name);

    printf("1.infosys:\n");
    printf("2.google:\n");
    printf("3.microsoft:\n");
    printf("4.tata:\n");
    printf("5.adani:\n");
    printf("6.jio:\n");
    printf("7.wipro:\n");
    printf("8.tcs:\n");

    printf("enter your choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("infosys\n");
        printf("your name is: %s\n", name);
        printf("enter your percentage:\n");
        scanf("%d",&percentage);
        printf("enter your final year cgpa:\n");
        scanf("%d",&cgpa);

        if(percentage<60){
            printf("you are not eligible in infosys to apply\n");
            return 0;
        }
        else{
            printf("your are eligible in infosys to apply\n");
            if(cgpa<7){
                printf("you are not eligible in infosys to apply\n");
                return 0;
            }
            else{
                printf("your are eligible in infosys to apply\n");
            }
        }
        break;

        case 2:
        printf("google\n");
        printf("your name is: %s\n", name);
        printf("enter your percentage:\n");
        scanf("%d",&percentage);
        printf("enter your final year cgpa:\n");
        scanf("%d",&cgpa);
        if (percentage<70){
            printf("you are not eligible to google group apply\n");

        }
        else{
            printf("your are eligible to google group apply\n");
            if (cgpa<6){
                printf("your are eligible not  apply");
            }
            else{
                printf("your are eligible to apply");
            }
        }
        break;

        case 3:
        printf("microsoft\n");
        printf("your name is: %s\n", name);
        printf("enter your percentage:\n");
        scanf("%d",&percentage);
        printf("enter your final year cgpa:\n");
        scanf("%d",&cgpa);

        if(percentage<70){
            printf("you are not eligible to microsoft group apply\n");
           
        }
        else{
            printf("your are eligible to microsoft group apply\n");
        }
        if(cgpa<6){
            printf("you are not eligible to microsoft group apply\n");
        }
        else{
            printf("your are eligible to microsoft group apply\n");
        }
        break;

        case 4:
        printf("tata\n");
        printf("your name is: %s\n", name);
        printf("enter your percentage:\n");
        scanf("%d",&percentage);
        printf("enter your final year cgpa:\n");
        scanf("%d",&cgpa);

        if(percentage<60){
            printf("you are not eligible to tata group apply\n");

        }
        else{
            printf("your are eligible to tata group apply\n");
        }
        if (cgpa<6){
            printf("you are not eligible to tata group apply\n");
        }
        else{
            printf("your are eligible to tata group apply\n");
        }
        break;

        case 5:
        printf("adani\n");
        printf("your name is: %s\n", name);
        printf("enter your percentage:\n");
        scanf("%d",&percentage);
        printf("enter your final year cgpa:\n");
        scanf("%d",&cgpa);

        if(percentage<70){
            printf("you are not eligible to adani group apply\n");
            
        }
        else{
            printf("your are eligible to adani group apply\n");
        }
        if(cgpa<6){
            printf("you are not eligible to adani group apply\n");
        }
        else{
            printf("your are eligible to adani group apply\n");
        }
        break;

        case 6:
        printf("jio\n");
        printf("your name is: %s\n", name);
        printf("enter your percentage:\n");
        scanf("%d",&percentage);
        printf("enter your final year cgpa:\n");
        scanf("%d",&cgpa);
        if(percentage<60){
            printf("you are not eligible in jio to apply\n"); 
        }
        else{
            printf("your are eligible in jio to apply\n");
        }
        if(cgpa<6){
            printf("you are not eligible in jio to apply\n");
        }
        else{
            printf("your are eligible in jio to apply\n");
        }
        break;

        case 7:
        printf("wipro\n");
        printf("your name is: %s\n", name);
        printf("enter your percentage:\n");
        scanf("%d",&percentage);
         printf("enter your final year cgpa:\n");
        scanf("%d",&cgpa);

        if(percentage<60){
            printf("you are not eligible in wipro to apply \n");
        }
        else{
            printf("your are eligible in wipro to apply\n");
        }
        if(cgpa<6){
            printf("you are not eligible in wipro to apply\n");
        }
        else{
            printf("your are eligible in wipro to apply\n");
        }
        break;

        case 8:
        printf("tcs\n");
        printf("your name is: %s\n", name);
        printf("enter your percentage:\n");
        scanf("%d",&percentage);
        printf("enter your final year cgpa:\n");
        scanf("%d",&cgpa);
        if(percentage<60){
            printf("you are not eligible in tcs to apply\n");
        }
        else{
            printf("your are eligible in tcs to apply\n");
        }
        if(cgpa<6){
            printf("you are not eligible in tcs to apply\n");
        }
        else{
            printf("your are eligible in tcs to apply\n");
        }
        break;
        default:printf("invalid number");
    }
    printf("%d",choice);
    return 0;
 }