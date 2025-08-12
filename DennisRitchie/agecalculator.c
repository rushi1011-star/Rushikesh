#include<stdio.h>
 int main()
 {
    int birth_date,current_year,sum;
    printf("enter the your birth year:");
    scanf("%d",&birth_date);
    printf("Enter the your current year:");
    scanf("%d",&current_year);
    sum=current_year-birth_date;
    printf("Your age is:%d",sum);
    return 0;
 }