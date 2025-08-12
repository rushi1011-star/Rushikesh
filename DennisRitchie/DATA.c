// #include<stdio.h>
// #include<string.h>
//     int main(){
//         int n1,n2;
//         int *p1,*p2;
//         p1=&n1;
//         p2=&n2

//         printf("enter your n1 number:");
//         scanf("%d",&n1);
//         printf("enter your n2 number:");
//         scanf("%d",&n2);

//         printf("addition of this is:%d",(*p1)+(*p2));
//         printf("addition of this is:%d",(p1)+(p2));
//         printf("addition of this is:%d",n1);
//         printf("addition of this is:%d",n2);

    

//         return 0;
//     }
    

// #include <stdio.h>

// struct student_detail {
//     char student_name[50];
//     int roll_number;
//     char university_name[50];
//     char college_name[50];
// };

// int main() {
//     struct student_detail r1;

//     printf("Enter student name: ");
//     scanf(" %[^\n]s", r1.student_name);  
//     scanf("%d", &r1.roll_number);

//     printf("Enter university name: ");
//     scanf(" %[^\n]s", r1.university_name);

//     printf("Enter college name: ");
//     scanf(" %[^\n]s", r1.college_name);

//     printf("\n--- Student Details ---\n");
//     printf("Name: %s\n", r1.student_name);
//     printf("Roll Number: %d\n", r1.roll_number);
//     printf("University: %s\n", r1.university_name);
//     printf("College: %s\n", r1.college_name);

//     return 0;
// }

// #include<stdio.h>
 
// struct student_detail{
//     char student_name[500];
//     char student_university[510];
//     int student_roll;
//     int student_mob;
// }r1;
// int main(){
//     struct student_detail r1;

//     printf("enter the strudent name:");
//     scanf("%s",r1.student_name);
//     printf("enter the strudent name:");
//     scanf("%s",r1.student_university);
//     printf("enter the strudent name:");
//     scanf("%s",r1.student_roll);
//     printf("enter the strudent name:");
//     scanf("%s",r1.student_mob);

//     printf("enter the strudent name:%s",r1.student_name);
//     printf("enter the strudent name:%s",r1.student_university);
//     printf("enter the strudent name:%d",r1.student_roll);
//     printf("enter the strudent name:%d",r1.student_mob);

    


//     return 0;
// }



recursion
recursion is a process where function call it self...

#include<stdio.h>
int main()
{
    int top,i,stack[10];
    printf("Enter the number:");
    scanf("%d",&top);
    for(i=0;i<top;i++)
    {
        scanf("%d",&stack[i]);
    }
    return 0;
}
