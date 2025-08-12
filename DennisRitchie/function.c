// syntax of functions

// fun(){
//     //code
// }


//#include<stdio.h>
// void greet();

// int main() {
//     printf("Main function started.\n");

//     greet();

//     printf("Main function ended.\n");
//     return 0;
// }
// void greet() {
//     printf("Hello from the greet function!\n");
// }

// float calculationarea(int,int);
// int main(){
//     int h,b;
//     float area;
//     printf("enter the number:");
//     scanf("%d%d",&h,&b);
//     area=calculationarea(h,b);
//     printf("area is the:%f",area);
//     return 0;
// }

// float calculationarea(int h,int b){
//     return (0.5*b*h);
// }






// #include <stdio.h>

// // Function with no arguments and no return value
// void areaOfTriangle() {
//     int base, height;
//     float area;

//     printf("Enter base and height of the triangle: ");
//     scanf("%d %d", &base, &height);

//     area = 0.5 * base * height;

//     printf("Area of triangle: %.2f\n", area);
// }

// int main() {
//     // Function call
//     areaOfTriangle();
//     return 0;
// }

// #include <stdio.h>

// // Function with arguments and no return value
// void areaOfTriangle(int base, int height) {
//     float area = 0.5 * base * height;
//     printf("Area of triangle: %.2f\n", area);
// }

// int main() {
//     int b, h;

//     printf("Enter base and height of the triangle: ");
//     scanf("%d %d", &b, &h);

//     // Function call with arguments
//     areaOfTriangle(b, h);

//     return 0;
// }

// #include <stdio.h>

// // Function with no arguments but returns the area
// float areaOfTriangle() {
//     int base, height;
//     float area;

//     printf("Enter base and height of the triangle: ");
//     scanf("%d %d", &base, &height);

//     area = 0.5 * base * height;
//     return area; // return value to main
// }

// int main() {
//     float area;

//     // Function call and storing returned value
//     area = areaOfTriangle();

//     // Displaying the result
//     printf("Area of triangle: %.2f\n", area);

//     return 0;
// }

// #include <stdio.h>

// // Function with arguments and return value
// float areaOfTriangle(int base, int height) {
//     float area = 0.5 * base * height;
//     return area;  // returning the area to main
// }

// int main() {
//     int b, h;
//     float area;

//     printf("Enter base and height of the triangle: ");
//     scanf("%d %d", &b, &h);

//     // Function call with arguments, store return value
//     area = areaOfTriangle(b, h);

//     // Print the result
//     printf("Area of triangle: %.2f\n", area);

//     return 0;
// }






// #include<stdio.h>
//  void rushi(){
//     printf("hello sanchita");
//     return;
//  }
//  int main(){
//     rushi(); //function calling
//     rushi();
//     return 0;
//  }




// #include<stdio.h>
// void india(){
//     printf("hello india\n");
//     japan();
//     return;
// }
// void japan(){
//     printf("hello japan\n ");
//     return;
// }
// int main(){
//     india();
//     return 0;


// #include<stdio.h>
// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     int a,b,sum;
//     printf("enter the number:");
//     scanf("%d%d",&a,&b);
//     sum=a+b;
//     printf("sum is:%d",sum);
//     return 0;
// }


#include<stdio.h>

struct me {
    char student[100];
    char studentid[100];
    char studentnumber[20];  
    char department[20];
};

int main() {
    struct me rushi;

    // Input section
    printf("Enter the student name: ");
    scanf("%s", rushi.student);

    printf("Enter the student ID: ");
    scanf("%s", rushi.studentid);

    printf("Enter the student number: ");
    scanf("%s", rushi.studentnumber); 

    printf("Enter the department: ");
    scanf("%s", rushi.department);

    // Output section
    printf("\nStudent name is: %s\n", rushi.student);
    printf("Student ID is: %s\n", rushi.studentid);
    printf("Student number is: %s\n", rushi.studentnumber);
    printf("Department is: %s\n", rushi.department);

    return 0;
}

 


