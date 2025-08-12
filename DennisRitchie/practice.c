
// #include<stdio.h>
//  int main()
//  {
//     int birth_date,current_year,sum;
//     printf("enter the your birth year:");
//     scanf("%d",&birth_date);
//     printf("Enter the your current year:");
//     scanf("%d",&current_year);
//     sum=current_year-birth_date;
//     printf("Your age is:%d",sum);
//     return 0;
//  }

//  #include<stdio.h>
// /* 
// int main(){
//    int a[10]={1,2,3,4,5,6,7,8,9,10};
//    printf("%d",a[9]);
//    return 0;
// }
// */
// /* 
// int main(){
//     int a[5];
//      a[0]=10;
//      a[1]=6025;
//      a[2]=500;
//      a[3]=100;
//      a[4]=20;
//   printf("%d",a[4]);
//   return 0;

// }
// */  
// int main(){
//     int a[5];
//     printf("enter your first number:");
//     scanf("%d",&a[0]);
//     printf("enter your second number:");
//     scanf("%d",&a[1]);
    
//     printf("%d",a[0]);

//     return 0;
// }

// /* 
// int main(){
//     int a[2];
//     printf("enter your first number:");
//     scanf("%d",a[0]);
//     printf("enter your second number:");
//     scanf("%d",a[1]);
    
//     printf("%d",a[0]);

//     return 0;

// }
// */
// /* 
// int main(){
//     int a[5]={1,2,3,4,5};
//     for(int i=0;i<=4;i++){
//          printf("%d ",a[i]);
//      }
//      return 0;
//  }
// */
// /*
// int main(){
//     int a[5];
//     for (int i=1;i<=4;i++){
//         printf("enter your number %d: ",i+1);
//         scanf("%d",&a[i]);
//     }
//     printf("%d",a[2]);
//     return 0;

// }
// */ 

// #include<stdio.h>
// int main(){
//     char name[50];
//     int choice;
//     printf("enter your name:");
//     scanf("%[^\n]", name);

//     printf("1.amount withdraw\n");
//     printf("2.deposit amount\n");
//     printf("3.account holder details\n");
//     printf("4.account balance\n");
//     printf("5.exit\n");

//     printf("enter your choice:");
//     scanf("%d",&choice);

//     switch(choice){
//         case 1:{
//         int withdrawamount=20000;
//         printf("your amount is available on bank is:%d\n",withdrawamount);
//         printf("enter your withdraw amount:");
//         scanf("%d",&withdrawamount);
       
//          if (withdrawamount>20000){
//             printf("no money in your account");

//          }
//          else if(withdrawamount<=20000){
//             printf("withdrawn amount is %d",withdrawamount);
//          }
//          else{
//                 printf("withdrawn amount is %d",withdrawamount);
//             }
//         break;
//         }

//         case 2:{
//         int deposit;
//         printf("enter your deposit amount:");
//         scanf("%d",&deposit);
//         printf("deposited amount is %d",deposit);
//         break;
//         }

//         case 3:{
//         printf("entered your account holder details:\n");
//         printf("name:%s",name);
//         printf("deposited amount = 1000");
//         printf("account number=3619575636488");
//         break;
//         }

//         case 4:{
//         int balance = 1000; 
//         printf("account balance details:\n");
//         printf("entered your account name:%s\n",name);
//         printf("your balance is:%d",balance);
//         break;
//         }
        
//         case 5:{
//         printf("exit");
//         break;
//         }
        
//         default:printf("invalid number");
//         break;
//     }
//     return 0;
// }


// // #include<stdio.h>
// //  int main(){
// //     int n,i,arr[10],search, found=0;
// //     printf("enter the your arrays of number :");
// //     scanf("%d",&n);

// //     printf("your number is %d\n:",n);
// //     for(i=0;i<n;i++){
// //         scanf("%d",&arr[i]);
// //     }
// //     printf("enter your search number :");
// //     scanf("%d",&search);
// //     for(i=0;i<n;i++){
// //         if(arr[i]==search){
// //             printf("your search number %d is found at %d\n",search,i);
// //             found=1;
// //             break;
// //         }
// //     }
// //     if(!found){
// //         printf("your searching value is not found\n");
// //     }
// //     return 0;
// //  }

// #include <stdio.h> 
// int main() 
// { 
//     int num[50],i,first,last,middle,n,search; 
//     printf("\n\t\t ENTER NUMBER OF ELEMENTS : "); 
//     scanf("%d",&n); 
 
//     printf("\n\t\t ENTER %d NUMBERS IN ASCENDING ORDER: ",n); 
 
//     for(i=0;i<n;i++) 
//     { 
//         scanf("%d",&num[i]); 
//     } 
 
//     printf("\n\t\t ENTER NUMBER... YOU WANT TO SEARCH : "); 
//     scanf("%d",&search); 
 
//     first=0; 
//     last=n-1; 
//     middle=(first+last)/2; 
 
//     while(first<=last) 
//     { 
//         if (num[middle]==search) 
//         { 
//             printf("\n\t\t %d FOUNT AT LOCATION %d ",search,middle+1); 
//             break; 
//         } 
//         else if(num[middle]<search) 
//         { 
//             first=middle+1; 
//         } 
//         else 
//         { 
//             last=middle-1; 
//         } 
//         middle=(first+last)/2; 
//     } 
 
//     if(first>last) 
//         printf("\n\t\t %d IS NOT PRESENT IN ARRAY ",search); 
//     return 0; 
// }

// #include<stdio.h>
// int main()
// {
//     int num[30],i,j,temp,n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     printf("is arrays element is:");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&num[i]);
//     }
//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-i-1;j++)
//         {
//             if(num[j]>num[j+1])
//             {
//                 temp=num[j];
//                 num[j]=num[j+1];
//                 num[j+1]=temp;
//             }
//         }
//     }
//     printf("sorted arrays is:");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",num[i]);
//     }
//     return 0;
// }





// #include <stdio.h>

// int main() {
//     int arr[100], n, i, j, key;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Insertion Sort
//     for(i = 1; i < n; i++) {
//         key = arr[i];           // Current element to be inserted
//         j = i - 1;

//         // Shift elements greater than key to one position ahead
//         while(j >= 0 && arr[j] > key) {                                      //insertion sort
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         // Insert key at the correct position
//         arr[j + 1] = key;
//     }

//     printf("Sorted array is:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// // #include <stdio.h>

// // int main() {
// //     int arr[100], n, i, j, vacant, pos;

// //     printf("Enter number of elements: ");
// //     scanf("%d", &n);

// //     printf("Enter %d elements:\n", n);
// //     for(i = 0; i < n; i++) {
// //         scanf("%d", &arr[i]);                             // with logic another insertion sort....
// //     }

// //     for(i = 1; i < n; i++) {
// //         vacant = arr[i];   
// //         pos = i;

// //         for(j = i - 1; j >= 0; j--) {
// //             if(arr[j] > vacant) {
// //                 arr[j + 1] = arr[j]; 
// //                 pos = j;
// //             }
// //             else 
// //             {
// //                 break; 
// //             }
// //         }

// //         arr[pos] = vacant; 
// //     }

// //     printf("Sorted array is :\n");
// //     for(i = 0; i < n; i++) {
// //         printf("%d ", arr[i]);
// //     }

// //     return 0;
// // }

// #include<stdio.h>
//  int main(){
//      int choise,num1,num2,sum;
     
//      printf("1.addition\n");
//      printf("2.substration\n");
//      printf("3.multiplication\n");
//      printf("4.division\n");
//      printf("5.exit\n");
     
//      printf("enter your number:");
//      scanf("%d",&choise);
     
//      switch(choise){
//          case 1:
//          printf("enter the first number:");
//          scanf("%d",&num1);
//          printf("enter the second number:");
//          scanf("%d",&num2);
//          sum=num1+num2;
//          printf("%d+%d=%d",num1,num2,sum);
//          break;
         
//          case 2:
//          printf("enter the first number:");
//          scanf("%d",&num1);
//          printf("enter the second number:");
//          scanf("%d",&num2);
//          sum=num1-num2;
//          printf("%d-%d=%d",num1,num2,sum);
//          break;
         
//          case 3:
//          printf("enter the first number:");
//          scanf("%d",&num1);
//          printf("enter the second number:");
//          scanf("%d",&num2);
//          sum=num1*num2;
//          printf("%d*%d=%d",num1,num2,sum);
//          break;
         
//          case 4:
//          printf("enter the first number:");
//          scanf("%d",&num1);
//          printf("enter the second number:");
//          scanf("%d",&num2);
//          sum=num1/num2;
//          printf("%d/%d=%d",num1,num2,sum);
//          break;
         
//          case 5:
//          printf("exit");
//          break;
         
//          default:printf("invalid number");  
//      }
//      return 0;
//  }


 
// // #include<stdio.h>
// // #include<string.h>
// //  int main(){
// //     char str[20];
// //     int i=0;
// //     printf("enter the string name:");
// //     gets(str);

// //     while(str[i]!='\0'){
// //         i++;
// //     }
// //     i--;
// //     while(i>=0){
// //         printf("%c",str[i]);
// //         i--;
// //     }
// //    return 0;
// //  }

// // #include<stdio.h>
// // int main(){
// //     char str[100];
// //     int i;
// //     printf("enter your string:");
// //     gets(str);
// //     for(i=;str[i]!='\0';i++);
// //     i--;
// //     for(i>=0){
// //         printf("%c",str[i]);
// //         i--;    
// //     }
// //     return 0;


// // }
// // c program copy on another string without using string function


// #include <stdio.h>

// int main() {
//     char str1[100], str2[100];
//     int i;

//     printf("Enter the string: ");
//     gets(str1); 
    
//     for(i = 0; str1[i] != '\0'; i++) {
//         str2[i] = str1[i];
//     }

//     str2[i] = '\0'; 

//     printf("Copied string is: %s\n", str2);

//     return 0;
// }


// #include <stdio.h>

// struct Student {
//     char studentname[50];
//     int studentid;
//     char department[20];
// };

// void addStudent() {
//     struct Student b1;
//     int number;

//     printf("Enter the student name: ");
//     scanf(" %[^\n]", b1.studentname); 

//     printf("Enter the student ID: ");
//     scanf("%d", &b1.studentid);

//     printf("Select department:\n");
//     printf("1. CSE\n2. ENTC\n3. Civil\n4. AI\n");
//     printf("Choose department number: ");
//     scanf("%d", &number);
 
//     switch (number) {
//         case 1: strcpy(b1.department, "CSE"); break;
//         case 2: strcpy(b1.department, "ENTC"); break;
//         case 3: strcpy(b1.department, "Civil"); break;
//         case 4: strcpy(b1.department, "AI"); break;
//         default: strcpy(b1.department, "Unknown"); break;
//     }

//     printf("\n--- Student Info Added ---\n");
//     printf("Name: %s\n", b1.studentname);
//     printf("ID: %d\n", b1.studentid);
//     printf("Department: %s\n", b1.department);
// }

// int main() {
//     int choice;

//     printf("----- College Management Menu -----\n");
//     printf("1. Add Student\n");
//     printf("2. Add Faculty\n");
//     printf("3. Enter Student Marks\n");
//     printf("4. Pay Student Fees\n");
//     printf("5. Display Student Info\n");
//     printf("6. Display Faculty Info\n");
//     printf("7. Exit\n");

//     printf("\nEnter your choice number: ");
//     scanf("%d", &choice);

//     switch (choice) {
//         case 1:
//             addStudent();
//             break;
//         default:
//             printf("Option not implemented yet.\n");
//     }

//     return 0;
// }



// #include<stdio.h>
//  int main(){
//     char name[50];
//     int choice,percentage,cgpa;
//     printf("enter your name :");
//     scanf("%[^\n]",name);

//     printf("1.infosys:\n");
//     printf("2.google:\n");
//     printf("3.microsoft:\n");
//     printf("4.tata:\n");
//     printf("5.adani:\n");
//     printf("6.jio:\n");
//     printf("7.wipro:\n");
//     printf("8.tcs:\n");

//     printf("enter your choice:");
//     scanf("%d",&choice);

//     switch(choice){
//         case 1:
//         printf("infosys\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<60){
//             printf("you are not eligible in infosys to apply\n");
//             return 0;
//         }
//         else{
//             printf("your are eligible in infosys to apply\n");
//             if(cgpa<7){
//                 printf("you are not eligible in infosys to apply\n");
//                 return 0;
//             }
//             else{
//                 printf("your are eligible in infosys to apply\n");
//             }
//         }
//         break;

//         case 2:
//         printf("google\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);
//         if (percentage<70){
//             printf("you are not eligible to google group apply\n");

//         }
//         else{
//             printf("your are eligible to google group apply\n");
//             if (cgpa<6){
//                 printf("your are eligible not  apply");
//             }
//             else{
//                 printf("your are eligible to apply");
//             }
//         }
//         break;

//         case 3:
//         printf("microsoft\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<70){
//             printf("you are not eligible to microsoft group apply\n");
           
//         }
//         else{
//             printf("your are eligible to microsoft group apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible to microsoft group apply\n");
//         }
//         else{
//             printf("your are eligible to microsoft group apply\n");
//         }
//         break;

//         case 4:
//         printf("tata\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<60){
//             printf("you are not eligible to tata group apply\n");

//         }
//         else{
//             printf("your are eligible to tata group apply\n");
//         }
//         if (cgpa<6){
//             printf("you are not eligible to tata group apply\n");
//         }
//         else{
//             printf("your are eligible to tata group apply\n");
//         }
//         break;

//         case 5:
//         printf("adani\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<70){
//             printf("you are not eligible to adani group apply\n");
            
//         }
//         else{
//             printf("your are eligible to adani group apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible to adani group apply\n");
//         }
//         else{
//             printf("your are eligible to adani group apply\n");
//         }
//         break;

//         case 6:
//         printf("jio\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);
//         if(percentage<60){
//             printf("you are not eligible in jio to apply\n"); 
//         }
//         else{
//             printf("your are eligible in jio to apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible in jio to apply\n");
//         }
//         else{
//             printf("your are eligible in jio to apply\n");
//         }
//         break;

//         case 7:
//         printf("wipro\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//          printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<60){
//             printf("you are not eligible in wipro to apply \n");
//         }
//         else{
//             printf("your are eligible in wipro to apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible in wipro to apply\n");
//         }
//         else{
//             printf("your are eligible in wipro to apply\n");
//         }
//         break;

//         case 8:
//         printf("tcs\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);
//         if(percentage<60){
//             printf("you are not eligible in tcs to apply\n");
//         }
//         else{
//             printf("your are eligible in tcs to apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible in tcs to apply\n");
//         }
//         else{
//             printf("your are eligible in tcs to apply\n");
//         }
//         break;
//         default:printf("invalid number");
//     }
//     printf("%d",choice);
//     return 0;
//  }

 
// #include<stdio.h>
//  int main(){
//     char name[50];
//     int choice,percentage,cgpa;
//     printf("enter your name :");
//     scanf("%[^\n]",name);

//     printf("1.infosys:\n");
//     printf("2.google:\n");
//     printf("3.microsoft:\n");
//     printf("4.tata:\n");
//     printf("5.adani:\n");
//     printf("6.jio:\n");
//     printf("7.wipro:\n");
//     printf("8.tcs:\n");

//     printf("enter your choice:");
//     scanf("%d",&choice);

//     switch(choice){
//         case 1:
//         printf("infosys\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<60){
//             printf("you are not eligible in infosys to apply\n");
//             return 0;
//         }
//         else{
//             printf("your are eligible in infosys to apply\n");
//             if(cgpa<7){
//                 printf("you are not eligible in infosys to apply\n");
//                 return 0;
//             }
//             else{
//                 printf("your are eligible in infosys to apply\n");
//             }
//         }
//         break;

//         case 2:
//         printf("google\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);
//         if (percentage<70){
//             printf("you are not eligible to google group apply\n");

//         }
//         else{
//             printf("your are eligible to google group apply\n");
//             if (cgpa<6){
//                 printf("your are eligible not  apply");
//             }
//             else{
//                 printf("your are eligible to apply");
//             }
//         }
//         break;

//         case 3:
//         printf("microsoft\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<70){
//             printf("you are not eligible to microsoft group apply\n");
           
//         }
//         else{
//             printf("your are eligible to microsoft group apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible to microsoft group apply\n");
//         }
//         else{
//             printf("your are eligible to microsoft group apply\n");
//         }
//         break;

//         case 4:
//         printf("tata\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<60){
//             printf("you are not eligible to tata group apply\n");

//         }
//         else{
//             printf("your are eligible to tata group apply\n");
//         }
//         if (cgpa<6){
//             printf("you are not eligible to tata group apply\n");
//         }
//         else{
//             printf("your are eligible to tata group apply\n");
//         }
//         break;

//         case 5:
//         printf("adani\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<70){
//             printf("you are not eligible to adani group apply\n");
            
//         }
//         else{
//             printf("your are eligible to adani group apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible to adani group apply\n");
//         }
//         else{
//             printf("your are eligible to adani group apply\n");
//         }
//         break;

//         case 6:
//         printf("jio\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);
//         if(percentage<60){
//             printf("you are not eligible in jio to apply\n"); 
//         }
//         else{
//             printf("your are eligible in jio to apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible in jio to apply\n");
//         }
//         else{
//             printf("your are eligible in jio to apply\n");
//         }
//         break;

//         case 7:
//         printf("wipro\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//          printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<60){
//             printf("you are not eligible in wipro to apply \n");
//         }
//         else{
//             printf("your are eligible in wipro to apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible in wipro to apply\n");
//         }
//         else{
//             printf("your are eligible in wipro to apply\n");
//         }
//         break;

//         case 8:
//         printf("tcs\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);
//         if(percentage<60){
//             printf("you are not eligible in tcs to apply\n");
//         }
//         else{
//             printf("your are eligible in tcs to apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible in tcs to apply\n");
//         }
//         else{
//             printf("your are eligible in tcs to apply\n");
//         }
//         break;
//         default:printf("invalid number");
//     }
//     printf("%d",choice);
//     return 0;
//  }


//  #include <stdio.h>
// #include <string.h>
// #include <math.h>

// // Convert Binary to Decimal
// int binaryToDecimal(long long bin) {
//     int dec = 0, base = 1, rem;
//     while (bin != 0) {
//         rem = bin % 10;
//         dec = dec + rem * base;
//         bin = bin / 10;
//         base = base * 2;
//     }
//     return dec;
// }
// // Convert Decimal to Binary
// long long decimalToBinary(int dec) {
//      long long bin = 0; 
//     int rem, base = 1;
//     while (dec > 0) {
//         rem = dec % 2;
//         bin = bin + rem * base;
//         dec = dec / 2;
//         base = base * 10;
//     }
//     return bin;
// }
// void decimalToHex(int dec) {
//     char hex[20];
//     sprintf(hex, "%X", dec);
//     printf("Hexadecimal: %s\n", hex);
// }

// // Hexadecimal to Decimal
// int hexToDecimal(char hex[]) {
//     int dec;
//     sscanf(hex, "%x", &dec);
//     return dec;
// }

// // Binary to Hex
// void binaryToHex(long long bin) {
//     int dec = binaryToDecimal(bin);
//     decimalToHex(dec);
// }

// // Hex to Binary
// void hexToBinary(char hex[]) {
//     int dec = hexToDecimal(hex);
//     long long bin = decimalToBinary(dec);
//     printf("Binary: %lld\n", bin);
// }

// int main() {
//     int choice;
//     do {
//         printf("\n-- Number System Converter --\n");
//         printf("1. Binary to Decimal\n");
//         printf("2. Decimal to Binary\n");
//         printf("3. Decimal to Hexadecimal\n");
//         printf("4. Hexadecimal to Decimal\n");
//         printf("5. Binary to Hexadecimal\n");
//         printf("6. Hexadecimal to Binary\n");
//         printf("7. Exit\n");

//         printf("Choose: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1: {
//                 long long bin;
//                 printf("Enter Binary number: ");
//                 scanf("%lld", &bin);
//                 printf("Decimal: %d\n", binaryToDecimal(bin));
//                 break;
//             }
//             case 2: {
//                 int dec;
//                 printf("Enter Decimal number: ");
//                 scanf("%d", &dec);
//                 printf("Binary: %lld\n", decimalToBinary(dec));
//                 break;
//             }
//             case 3: {
//                 int dec;
//                 printf("Enter Decimal number: ");
//                 scanf("%d", &dec);
//                 decimalToHex(dec);
//                 break;
//             }                   
//             case 4: {
//                 char hex[10];
//                 printf("Enter Hexadecimal number: ");
//                 scanf("%s", hex);
//                 printf("Decimal: %d\n", hexToDecimal(hex));
//                 break;
//             }
//             case 5: {
//                 long long bin;
//                 printf("Enter Binary number: ");
//                 scanf("%lld", &bin);
//                 binaryToHex(bin);
//                 break;
//             }
//             case 6: {
//                 char hex[10];
//                 printf("Enter Hexadecimal number: ");
//                 scanf("%s", hex);
//                 hexToBinary(hex);
//                 break;
//             }
//             case 7:
//                 printf("Goodbye!\n");
//                 break;
//             default:
//                 printf("Wrong Option! Try again\n");
//         }
//     } while (choice != 7);

//     return 0;
// }

// // #include<stdio.h>
// // #include<string.h>
// //     int main(){
// //         int n1,n2;
// //         int *p1,*p2;
// //         p1=&n1;
// //         p2=&n2

// //         printf("enter your n1 number:");
// //         scanf("%d",&n1);
// //         printf("enter your n2 number:");
// //         scanf("%d",&n2);

// //         printf("addition of this is:%d",(*p1)+(*p2));
// //         printf("addition of this is:%d",(p1)+(p2));
// //         printf("addition of this is:%d",n1);
// //         printf("addition of this is:%d",n2);

    

// //         return 0;
// //     }
    

// // #include <stdio.h>

// // struct student_detail {
// //     char student_name[50];
// //     int roll_number;
// //     char university_name[50];
// //     char college_name[50];
// // };

// // int main() {
// //     struct student_detail r1;

// //     printf("Enter student name: ");
// //     scanf(" %[^\n]s", r1.student_name);  
// //     scanf("%d", &r1.roll_number);

// //     printf("Enter university name: ");
// //     scanf(" %[^\n]s", r1.university_name);

// //     printf("Enter college name: ");
// //     scanf(" %[^\n]s", r1.college_name);

// //     printf("\n--- Student Details ---\n");
// //     printf("Name: %s\n", r1.student_name);
// //     printf("Roll Number: %d\n", r1.roll_number);
// //     printf("University: %s\n", r1.university_name);
// //     printf("College: %s\n", r1.college_name);

// //     return 0;
// // }

// // #include<stdio.h>
 
// // struct student_detail{
// //     char student_name[500];
// //     char student_university[510];
// //     int student_roll;
// //     int student_mob;
// // }r1;
// // int main(){
// //     struct student_detail r1;

// //     printf("enter the strudent name:");
// //     scanf("%s",r1.student_name);
// //     printf("enter the strudent name:");
// //     scanf("%s",r1.student_university);
// //     printf("enter the strudent name:");
// //     scanf("%s",r1.student_roll);
// //     printf("enter the strudent name:");
// //     scanf("%s",r1.student_mob);

// //     printf("enter the strudent name:%s",r1.student_name);
// //     printf("enter the strudent name:%s",r1.student_university);
// //     printf("enter the strudent name:%d",r1.student_roll);
// //     printf("enter the strudent name:%d",r1.student_mob);

    


// //     return 0;
// // }



// recursion
// recursion is a process where function call it self...

// #include<stdio.h>
// int main()
// {
//     int top,i,stack[10];
//     printf("Enter the number:");
//     scanf("%d",&top);
//     for(i=0;i<top;i++)
//     {
//         scanf("%d",&stack[i]);
//     }
//     return 0;
// }

// // syntax of functions

// // fun(){
// //     //code
// // }


// //#include<stdio.h>
// // void greet();

// // int main() {
// //     printf("Main function started.\n");

// //     greet();

// //     printf("Main function ended.\n");
// //     return 0;
// // }
// // void greet() {
// //     printf("Hello from the greet function!\n");
// // }

// // float calculationarea(int,int);
// // int main(){
// //     int h,b;
// //     float area;
// //     printf("enter the number:");
// //     scanf("%d%d",&h,&b);
// //     area=calculationarea(h,b);
// //     printf("area is the:%f",area);
// //     return 0;
// // }

// // float calculationarea(int h,int b){
// //     return (0.5*b*h);
// // }






// // #include <stdio.h>

// // // Function with no arguments and no return value
// // void areaOfTriangle() {
// //     int base, height;
// //     float area;

// //     printf("Enter base and height of the triangle: ");
// //     scanf("%d %d", &base, &height);

// //     area = 0.5 * base * height;

// //     printf("Area of triangle: %.2f\n", area);
// // }

// // int main() {
// //     // Function call
// //     areaOfTriangle();
// //     return 0;
// // }

// // #include <stdio.h>

// // // Function with arguments and no return value
// // void areaOfTriangle(int base, int height) {
// //     float area = 0.5 * base * height;
// //     printf("Area of triangle: %.2f\n", area);
// // }

// // int main() {
// //     int b, h;

// //     printf("Enter base and height of the triangle: ");
// //     scanf("%d %d", &b, &h);

// //     // Function call with arguments
// //     areaOfTriangle(b, h);

// //     return 0;
// // }

// // #include <stdio.h>

// // // Function with no arguments but returns the area
// // float areaOfTriangle() {
// //     int base, height;
// //     float area;

// //     printf("Enter base and height of the triangle: ");
// //     scanf("%d %d", &base, &height);

// //     area = 0.5 * base * height;
// //     return area; // return value to main
// // }

// // int main() {
// //     float area;

// //     // Function call and storing returned value
// //     area = areaOfTriangle();

// //     // Displaying the result
// //     printf("Area of triangle: %.2f\n", area);

// //     return 0;
// // }

// // #include <stdio.h>

// // // Function with arguments and return value
// // float areaOfTriangle(int base, int height) {
// //     float area = 0.5 * base * height;
// //     return area;  // returning the area to main
// // }

// // int main() {
// //     int b, h;
// //     float area;

// //     printf("Enter base and height of the triangle: ");
// //     scanf("%d %d", &b, &h);

// //     // Function call with arguments, store return value
// //     area = areaOfTriangle(b, h);

// //     // Print the result
// //     printf("Area of triangle: %.2f\n", area);

// //     return 0;
// // }






// // #include<stdio.h>
// //  void rushi(){
// //     printf("hello sanchita");
// //     return;
// //  }
// //  int main(){
// //     rushi(); //function calling
// //     rushi();
// //     return 0;
// //  }




// // #include<stdio.h>
// // void india(){
// //     printf("hello india\n");
// //     japan();
// //     return;
// // }
// // void japan(){
// //     printf("hello japan\n ");
// //     return;
// // }
// // int main(){
// //     india();
// //     return 0;


// // #include<stdio.h>
// // int sum(int a,int b){
// //     return a+b;
// // }
// // int main(){
// //     int a,b,sum;
// //     printf("enter the number:");
// //     scanf("%d%d",&a,&b);
// //     sum=a+b;
// //     printf("sum is:%d",sum);
// //     return 0;
// // }


// #include<stdio.h>

// struct me {
//     char student[100];
//     char studentid[100];
//     char studentnumber[20];  
//     char department[20];
// };

// int main() {
//     struct me rushi;

//     // Input section
//     printf("Enter the student name: ");
//     scanf("%s", rushi.student);

//     printf("Enter the student ID: ");
//     scanf("%s", rushi.studentid);

//     printf("Enter the student number: ");
//     scanf("%s", rushi.studentnumber); 

//     printf("Enter the department: ");
//     scanf("%s", rushi.department);

//     // Output section
//     printf("\nStudent name is: %s\n", rushi.student);
//     printf("Student ID is: %s\n", rushi.studentid);
//     printf("Student number is: %s\n", rushi.studentnumber);
//     printf("Department is: %s\n", rushi.department);

//     return 0;
// }

// // function with return type and with parameters 
// // function with return type and without parameters 
// // function without return type and with parameters 
// // function without return type and without parameters 

// // function with return type and with parameters 
// #include<stdio.h>
// int calculatearea();
// int main()
// {
//     int base,height;
//     float area;
//     printf("Enter the base and height:");
//     scanf("%d%d",&base,&height);
//     area=calculatearea(base,height);
//     printf("area of triangle is:%f",area);
// }
// int calculatearea(int b,int h)
// {
//     int ans=0.5*b*h;
//     return ans;
// }

// // function with return type and without parameters 
// #include<stdio.h>
// int calculatearea();
// int main()
// {
//     int b,h;
//     float area;
//     area=calculatearea();
//     printf("area of triangle is:%f",area);
//     return 0;
// }
// int calculatearea()
// {
//     int base,height;
//     printf("Enter the base and height:");
//     scanf("%d%d",&base,&height);
//     return (0.5*base*height);
// }

// // function without return type and with parameters 
// #include<stdio.h>
// void calculatearea();
// int main()
// {
//     int b,h;
//     printf("Enter the base and height:");
//     scanf("%d%d",&b,&h);
//     calculatearea(b,h);
//     return 0;
// }
// void calculatearea(int b,int h)
// {
//     printf("area of triangle is:%f",0.5*b*h);
// }

// // function without return type and without parameters 
// #include<stdio.h>
// void calculatearea();
// int main()
// {
//     calculatearea();
//     return 0;
// }
// void calculatearea()
// {
//     int base,height;
//     printf("Enter the base and height:");
//     scanf("%d%d",&base,&height);
//     printf("area is triangle:%f",0.5*base*height);
// }

// #include <stdio.h>

// // Function to swap two elements
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // Function to heapify a subtree rooted at index i
// void heapify(int arr[], int n, int i) {
//     int largest = i;           // Initialize largest as root
//     int left = 2 * i + 1;      // Left child index
//     int right = 2 * i + 2;     // Right child index

//     // If left child is larger than root
//     if (left < n && arr[left] > arr[largest])
//         largest = left;

//     // If right child is larger than largest so far
//     if (right < n && arr[right] > arr[largest])
//         largest = right;

//     // If largest is not root
//     if (largest != i) {
//         swap(&arr[i], &arr[largest]);

//         // Recursively heapify the affected subtree
//         heapify(arr, n, largest);
//     }
// }

// // Main Heap Sort function
// void heapSort(int arr[], int n) {
//     // Step 1: Build max heap
//     for (int i = n / 2 - 1; i >= 0; i--)
//         heapify(arr, n, i);

//     // Step 2: One by one extract elements from heap
//     for (int i = n - 1; i > 0; i--) {
//         // Move current root to end
//         swap(&arr[0], &arr[i]);

//         // Heapify reduced heap
//         heapify(arr, i, 0);
//     }
// }

// // Function to print array
// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; ++i)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// int main() {
//     int arr[50], n;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     heapSort(arr, n);

//     printf("Sorted array using Heap Sort: ");
//     printArray(arr, n);

//     return 0;
// }

// //Patient record handling, doctor details, appointments (structures & files).
// #include <stdio.h>
// #include <string.h>

// struct Patient {
//     char name[120];
//     int age;
//     char gender[10];
//     char disease[50];
// };

// struct Doctor {
//     char name[50];
//     char specialization[50];
//     char gender[10];
// };

// struct Appointment {
//     char patientName[120];
//     char doctorName[120];
//     char date[20];
//     char time[10];
// };

// char hospitalName[100] = "sant gajanan multispeciality hospital";
// char hospitalAddress[100] = "chinchewadi,mahgoan";

// void showHospitalInfo();
// void addPatient(struct Patient *p);
// void addDoctor(struct Doctor *d);
// void addAppointment(struct Appointment *a);
// void showPatient(struct Patient p);
// void showDoctor(struct Doctor d);
// void showAppointment(struct Appointment a);

// int main() {
//     struct Patient p1;
//     struct Doctor d1;
//     struct Appointment a1;
//     int choice;
//     while (1) {
//         printf("\n\nMenu:\n");
//         printf("1. Show Hospital Info\n");
//         printf("2. Add Patient Details\n");
//         printf("3. Add Doctor Details\n");
//         printf("4. Add Appointment\n");
//         printf("5. Show Patient Details\n");
//         printf("6. Show Doctor Details\n");
//         printf("7. Show Appointment Details\n");
//         printf("8. Exit\n");

//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         getchar();  
//         switch (choice) {
//             case 1:
//                 showHospitalInfo();
//                 break;
//             case 2:
//                 addPatient(&p1);
//                 break;
//             case 3:
//                 addDoctor(&d1);
//                 break;
//             case 4:
//                 addAppointment(&a1);
//                 break;
//             case 5:
//                 showPatient(p1);
//                 break;
//             case 6:
//                 showDoctor(d1);
//                 break;
//             case 7:
//                 showAppointment(a1);
//                 break;
//             case 8:
//                 printf("Exiting program. Thank you!\n");
//                 return 0;
//             default:
//                 printf("Invalid choice. Try again.\n");
//         }
//     }

//     return 0;
// }

// void showHospitalInfo() {
//     printf("\nHospital Name: %s", hospitalName);
//     printf("\nAddress: %s", hospitalAddress);
//     printf("\nTotal Beds: 150");
//     printf("\nEmergency Services: Available\n");
// }

// void addPatient(struct Patient *p){
//     printf("Enter Patient Name: ");
//     gets(p->name);
//     printf("Enter Age: ");
//     scanf("%d", &p->age);
//     getchar();
//     printf("Enter Gender: ");
//     gets(p->gender);
//     printf("Enter Disease: ");
//     gets(p->disease);

//     printf("Length of Name: %d\n", strlen(p->name));
//     if (strchr(p->name, 'a')) {
//         printf("Name contains the letter 'a'\n");
//     }
// }

// void addDoctor(struct Doctor *d) {
//     printf("Enter Doctor Name: ");
//     gets(d->name);
//     printf("Enter Specialization: ");
//     gets(d->specialization);
//     printf("Enter Gender: ");
//     gets(d->gender);

//     printf("Doctor name copied using strcpy.\n");
//     char tempName[50];
//     strcpy(tempName, d->name);
//     printf("Copied Name: %s\n", tempName);
// }

// void addAppointment(struct Appointment *a) {
//     printf("Enter Patient Name: ");
//     gets(a->patientName);
//     printf("Enter Doctor Name: ");
//     gets(a->doctorName);
//     printf("Enter Appointment Date (dd/mm/yyyy): ");
//     gets(a->date);
//     printf("Enter Time (e.g. 10:30AM): ");
//     gets(a->time);

//     strcat(a->date, " at ");
//     strcat(a->date, a->time); 
//     printf("Appointment Date-Time: %s\n", a->date);
// }

// void showPatient(struct Patient p) {
//     printf("\n--- Patient Details ---\n");
//     printf("Name: %s\n", p.name);
//     printf("Age: %d\n", p.age);
//     printf("Gender: %s\n", p.gender);
//     printf("Disease: %s\n", p.disease);
// }

// void showDoctor(struct Doctor d) {
//     printf("\n--- Doctor Details ---\n");
//     printf("Name: %s\n", d.name);
//     printf("Specialization: %s\n", d.specialization);
//     printf("Gender: %s\n", d.gender);
// }

// void showAppointment(struct Appointment a) {
//     printf("\n--- Appointment Details ---\n");
//     printf("Patient: %s\n", a.patientName);
//     printf("Doctor: %s\n", a.doctorName);
//     printf("Appointment: %s\n", a.date); 
// }


// #include<stdio.h>
//  int main(){
//     char name[50];
//     int book,choise;
//     float time;
//     printf("enter your name:");
//     scanf("%s",name);
    
//     printf("enter your booking number:\n ");
//     scanf("%d",&book);
//     printf("1.first class room\n");
//     printf("2.second class room\n");
//     printf("3.common room\n");
//     printf("4.function holl\n");
//     printf("5.exit\n");
    
//     printf("enter your choise number:\n");
//     scanf("%d",&choise);

//     switch(choise){
//         case 1:
//         printf("%s\n",name);
//         printf("%d\n",book);
//         printf("your choise is first class room");
//         printf("enter your use of time on this room:");
//         scanf("%f",&time);
//         printf("thank you for first class room booking");
//         break;

//         case 2:
//         printf("%s\n",name);
//         printf("%d\n",book);
//         printf("your choise is second class room");
//         printf("enter your use of time on this room:");
//         scanf("%f",&time);
//         printf("thank you for second class room booking");
//         break;

//         case 3:
//         printf("%s\n",name);
//         printf("%d\n",book);
//         printf("your choise is common room");
//         printf("enter your use of room time:");
//         scanf("%f",&time);
//         printf("thank you for common room booking");
//         break;

//         case 4:
//         printf("%s\n",name);
//         printf("%d\n",book);
//         printf("enter your use of time on this function holl:");
//         scanf("%f",&time);
//         printf("your choise is function holl");
//         printf("thank you for function holl booking");
//         break;

//         case 5:
//         printf("exit");
//         break;

//         default:
//         printf("invalide number");
//         break;
           
        
        
//     }
//     printf("your name is %s\n",name);
//     printf("your booking number is %d\n",book);
//     printf("your use of time is %.2f\n",time);
//     return 0;
//  }


// #include<stdio.h>
// #include<string.h>                                            // Library Management System
//  int main(){
//      int date,fav_book,book,name,choice;
//      char book_name[60];

//      printf("Welcome to the Library Management System\n");

//      printf("1.add your book\n");
//      printf("2.view your book\n");
//      printf("3.search book\n");
//      printf("4.return book\n");
//      printf("5.exit\n");

//      printf("please enter your selection: ");
//      scanf("%d", &choice);

//      switch(choice){
//         case 1:
//             printf("enter your book name: ");
//             scanf("%s", book_name);
//             printf("enter your return date: ");
//             scanf("%d", &date);
//             printf("your book is added successfully\n");
//             break;
//         case 2:
//            printf("view your book\n");
//               printf("your book name is: %s\n", book_name);
//               printf("your return date i s: %d\n", date);
//               break;

//         case 3:
//             printf("enter your book name:");
//             scanf("%s", book_name);

//             if(strcmp(book_name, "shivaji maharaj") ) {
//                 printf("Book found: shivaji maharaj\n");
//             } 
//             else if(strcmp(book_name, "shymachi Aai") )  {
//                 printf("Book found: shymachi Aai\n");
//             } 
//             else if(strcmp(book_name, "yoga") ) {
//                 printf("Book found: yoga\n");
//             } 
//             else if(strcmp(book_name, "abhogi") ) {
//                 printf("Book found: abhogi\n");
//             } 
//             else if(strcmp(book_name, "shree man yogi") )
//              {
//                 printf("Book found: shree man yogi\n");
//             }
//             else {
//                 printf("Book not found\n");
//             }

//             break;
        
//         case 4:
//             printf("enter your book name to return: ");
//             scanf("%s", book_name);
//             if(strcmp((book_name, "shivaji maharaj")==0) 
//                strcmp((book_name, "shymachi Aai"))
//                strcmp(book_name, "yoga")
//                strcmp(book_name, "abhogi")
//                strcmp(book_name, "shree man yogi") {
//                printf("Book '%s' returned successfully\n", book_name);
//            } else {
//                printf("Book not found in list\n");
//            }
//             break;
//         case 5:
//             printf("Exiting the Library Management System. Goodbye!\n");
//            break;

//         default:
//             printf("Invalid choice. Please try again.\n");
//      }
//      return 0;

//    }

//    #include<stdio.h>

// /*  int main(){
//     int i,n;
//     printf("enter your number:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//        int sum=0;
//        for(int j=1;j<=i;j++){
//            sum+=j;
//        }
//        printf("sum of %d is %d\n",i,sum);
//     }
//     return 0;
// }
// */ 

// int main(){
//    int num[20],even=0,odd=0;
//    printf("enter your numbers:");
//    for(int i=0;i<=19;i++){
//       scanf("%d",&num[i]);
//    }
//    for(int i=0;i<=19;i++){
//       if(num[i]%2==0){
//          even++;

//       }
//       else{
//          odd++;
//       }
//    }
//    printf("even number are %d\n",even);
//    printf("odd number is %d\n",odd);
//    return 0;
// }
 

// #include <stdio.h>

// int main() {
//     int months;
//     printf("Enter month number (1-12): ");
//     scanf("%d", &months);  
//     switch (months) {
//         case 1: printf("january"); break;
//         case 2: printf("february"); break;
//         case 3: printf("march"); break;
//         case 4: printf("april"); break;
//         case 5: printf("may"); break;
//         case 6: printf("june"); break;
//         case 7: printf("july"); break;
//         case 8: printf("august"); break;
//         case 9: printf("sep"); break;
//         case 10: printf("october"); break;
//         case 11: printf("november"); break;
//         case 12: printf("december"); break;
//         default: printf("randchya barobar number tak....."); break;
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>

// // int main(){
// //     int a, sum = 0, rem;
// //     printf("Enter your number: ");
// //     scanf("%d", &a);
// //     do{
// //         rem=a % 10;
// //         a=a/10;
// //         sum=rem + sum;
// //     }
// //     while(a > 0);
// //     printf("%d\n",sum);
// //     return 0;
// // }

// int main(){
//     char num[50];
//     printf("enter your number:");
//     scanf("%d",&num);
//     int str=strrev(num);
//     printf("%d",str);
//     }

//     #include<stdio.h>
//  int main(){
//     int password;
//     printf("enter your password:");
//     scanf("%d",&password);
//     if(password==413512){
//         printf("your password is correct\n");
//     }
//     else{
//         printf("your password is incorrect\n");
//     }
//     return 0;

// }

// #include<stdio.h>
//  int main(){
//     int arr[100],n,smallest,i;
//     printf("Enter the arrays number:");
//     scanf("%d",&n);
//     for(i=1;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     smallest=arr[0];{
//         for(i=1;i<n;i++){
//             if(arr[i]<smallest){
//                 smallest=arr[i];
//             }
//         }
//     }
//     printf("Smallest arrys elements is:%d",smallest);
//     return 0;
//  }
    

//  #include<stdio.h> 
 
// int stack[100], choice, n, top, x, i; 

// void push(); 
// void pop(); 
// void display(); 
// void peek(); 

// int main() 
// { 
//     top = -1; 
//     printf("\n\t ENTER SIZE OF STACK : "); 
//     scanf("%d", &n); 
//     printf("\n\t STACK OPERATIONS USING ARRAY"); 
//     printf("\n\t--------------------------------"); 
//     printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK \n\t 5.EXIT"); 

//     do 
//     { 
//         printf("\n\t ENTER THE CHOICE : "); 
//         scanf("%d", &choice); 
//         switch(choice) 
//         { 
//             case 1: push(); break; 
//             case 2: pop(); break; 
//             case 3: display(); break; 
//             case 4: peek(); break; 
//             case 5: printf("\n\t EXIT POINT "); break; 
//             default: printf ("\n\t PLEASE ENTER VALID CHOICE (1/2/3/4)");                  
//         } 
//     } 
//     while(choice != 5); 
//     return 0; 
// } 
 
// void push() 
// { 
//     if(top >= n-1) 
//     { 
//         printf("\n\t STACK IS OVERFLOW "); 
//     } 
//     else 
//     { 
//         printf("\n\t ENTER ELEMENT TO BE PUSH : "); 
//         scanf("%d", &x); 
//         top++; 
//         stack[top] = x; 
//         printf("\n\t\t %d IS INSERTED IN STACK ", x); 
//     } 
// } 

// void pop() 
// { 
//     if(top <= -1) 
//     { 
//         printf("\n\t STACK IS UNDERFLOW "); 
//     } 
//     else 
//     { 
//         printf("\n\t %d IS POPPED FROM STACK ", stack[top]); 
//         top--; 
//     } 
// } 

// void display() 
// { 
//     if(top >= 0) 
//     { 
//         printf("\n STACK ELEMENTS ARE \n"); 
//         for(i = top; i >= 0; i--) 
//             printf("\n\t %d", stack[i]); 
//     } 
//     else 
//     { 
//         printf("\n\t STACK IS EMPTY "); 
//     } 
// } 
 
// void peek() 
// { 
//     if(top <= -1) 
//     { 
//         printf("\n\t STACK IS EMPTY (TOP IS -1) "); 
//     } 
//     else 
//     { 
//         printf("\n\t Top position: %d, Value: %d", top, stack[top]);
//     } 
// }


// #include<stdio.h>
//  int main(){
//     char name[50];
//     int choice,percentage,cgpa;
//     printf("enter your name :");
//     scanf("%[^\n]",name);

//     printf("1.infosys:\n");
//     printf("2.google:\n");
//     printf("3.microsoft:\n");
//     printf("4.tata:\n");
//     printf("5.adani:\n");
//     printf("6.jio:\n");
//     printf("7.wipro:\n");
//     printf("8.tcs:\n");

//     printf("enter your choice:");
//     scanf("%d",&choice);

//     switch(choice){
//         case 1:
//         printf("infosys\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<60){
//             printf("you are not eligible in infosys to apply\n");
//             return 0;
//         }
//         else{
//             printf("your are eligible in infosys to apply\n");
//             if(cgpa<7){
//                 printf("you are not eligible in infosys to apply\n");
//                 return 0;
//             }
//             else{
//                 printf("your are eligible in infosys to apply\n");
//             }
//         }
//         break;

//         case 2:
//         printf("google\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);
//         if (percentage<70){
//             printf("you are not eligible to google group apply\n");

//         }
//         else{
//             printf("your are eligible to google group apply\n");
//             if (cgpa<6){
//                 printf("your are eligible not  apply");
//             }
//             else{
//                 printf("your are eligible to apply");
//             }
//         }
//         break;

//         case 3:
//         printf("microsoft\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<70){
//             printf("you are not eligible to microsoft group apply\n");
           
//         }
//         else{
//             printf("your are eligible to microsoft group apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible to microsoft group apply\n");
//         }
//         else{
//             printf("your are eligible to microsoft group apply\n");
//         }
//         break;

//         case 4:
//         printf("tata\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<60){
//             printf("you are not eligible to tata group apply\n");

//         }
//         else{
//             printf("your are eligible to tata group apply\n");
//         }
//         if (cgpa<6){
//             printf("you are not eligible to tata group apply\n");
//         }
//         else{
//             printf("your are eligible to tata group apply\n");
//         }
//         break;

//         case 5:
//         printf("adani\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<70){
//             printf("you are not eligible to adani group apply\n");
            
//         }
//         else{
//             printf("your are eligible to adani group apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible to adani group apply\n");
//         }
//         else{
//             printf("your are eligible to adani group apply\n");
//         }
//         break;

//         case 6:
//         printf("jio\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);
//         if(percentage<60){
//             printf("you are not eligible in jio to apply\n"); 
//         }
//         else{
//             printf("your are eligible in jio to apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible in jio to apply\n");
//         }
//         else{
//             printf("your are eligible in jio to apply\n");
//         }
//         break;

//         case 7:
//         printf("wipro\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//          printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);

//         if(percentage<60){
//             printf("you are not eligible in wipro to apply \n");
//         }
//         else{
//             printf("your are eligible in wipro to apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible in wipro to apply\n");
//         }
//         else{
//             printf("your are eligible in wipro to apply\n");
//         }
//         break;

//         case 8:
//         printf("tcs\n");
//         printf("your name is: %s\n", name);
//         printf("enter your percentage:\n");
//         scanf("%d",&percentage);
//         printf("enter your final year cgpa:\n");
//         scanf("%d",&cgpa);
//         if(percentage<60){
//             printf("you are not eligible in tcs to apply\n");
//         }
//         else{
//             printf("your are eligible in tcs to apply\n");
//         }
//         if(cgpa<6){
//             printf("you are not eligible in tcs to apply\n");
//         }
//         else{
//             printf("your are eligible in tcs to apply\n");
//         }
//         break;
//         default:printf("invalid number");
//     }
//     printf("%d",choice);
//     return 0;
//  }


/*
 * college_mgmt.c
 * Single-file College Management System in C
 *
 * Features:
 *  - Admin login (file-based)
 *  - Student management: add/view/search/update/delete
 *  - Faculty management: add/view/search/update/delete
 *  - Marks management: assign/view student marks
 *  - File handling with binary files
 *
 * Compile:
 *   gcc college_mgmt.c -o college_mgmt
 * Run:
 *   ./college_mgmt
 *
 * Author: ChatGPT (example educational code)
 */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// #define STUDENT_FILE "students.dat"
// #define FACULTY_FILE "faculty.dat"
// #define MARKS_FILE   "marks.dat"
// #define ADMIN_FILE   "admin.dat"

// #define MAX_NAME 100
// #define MAX_DEPT 50
// #define MAX_USER 50
// #define MAX_PASS 50


// typedef struct {
//     int id;                   
//     char name[MAX_NAME];
//     int age;
//     char department[MAX_DEPT];
//     char email[100];
//     char phone[20];
// } Student;

// typedef struct {
//     int id;                     // unique id
//     char name[MAX_NAME];
//     char department[MAX_DEPT];
//     char email[100];
//     char phone[20];
// } Faculty;

// typedef struct {
//     int student_id;
//     char course_name[100];
//     int marks;    // 0-100
// } Marks;

// typedef struct {
//     char username[MAX_USER];
//     char password[MAX_PASS]; 
// } Admin;


// void clear_input_buffer() {
//     int c;
//     while ((c = getchar()) != '\n' && c != EOF) {}
// }

// void read_line(char *buffer, int size) {
//     if (fgets(buffer, size, stdin)) {
//         size_t ln = strlen(buffer);
//         if (ln > 0 && buffer[ln - 1] == '\n') buffer[ln - 1] = '\0';
//     } else {
//         buffer[0] = '\0';
//     }
// }

// void press_any_key() {
//     printf("\nPress Enter to continue...");
//     clear_input_buffer();
// }

// int next_id_for_file(const char *filename, size_t rec_size) {
//     FILE *fp = fopen(filename, "rb");
//     if (!fp) return 1;
//     if (fseek(fp, -((long)rec_size), SEEK_END) != 0) {
     
//         fclose(fp);
//         return 1;
//     }
//     char *buf = malloc(rec_size);
//     if (!buf) { fclose(fp); return 1; }
//     if (fread(buf, rec_size, 1, fp) != 1) {
//         free(buf);
//         fclose(fp);
//         return 1;
//     }

//     int id;
//     memcpy(&id, buf, sizeof(int));
//     free(buf);
//     fclose(fp);
//     return id + 1;
// }


// void ensure_admin_exists() {
//     FILE *fp = fopen(ADMIN_FILE, "rb");
//     if (fp) { fclose(fp); return; } // admin exists
   
//     Admin a;
//     strcpy(a.username, "admin");
//     strcpy(a.password, "admin"); // default password
//     fp = fopen(ADMIN_FILE, "wb");
//     if (!fp) { printf("Error creating admin file\n"); return; }
//     fwrite(&a, sizeof(Admin), 1, fp);
//     fclose(fp);
//     printf("Default admin created (username: admin, password: admin). Please change it after login.\n");
// }

// int admin_login() {
//     ensure_admin_exists();
//     char username[MAX_USER], password[MAX_PASS];
//     printf("Login\n-----\n");
//     printf("Username: ");
//     read_line(username, sizeof(username));
//     printf("Password: ");
//     read_line(password, sizeof(password));
//     FILE *fp = fopen(ADMIN_FILE, "rb");
//     if (!fp) { printf("No admin data. Contact system admin.\n"); return 0; }
//     Admin a;
//     int ok = 0;
//     while (fread(&a, sizeof(Admin), 1, fp) == 1) {
//         if (strcmp(a.username, username) == 0 && strcmp(a.password, password) == 0) {
//             ok = 1; break;
//         }
//     }
//     fclose(fp);
//     if (!ok) {
//         printf("Invalid credentials.\n");
//     }
//     return ok;
// }

// void change_admin_password() {
//     FILE *fp = fopen(ADMIN_FILE, "rb+");
//     if (!fp) { printf("Admin settings file missing.\n"); return; }
//     Admin a;
//     if (fread(&a, sizeof(Admin), 1, fp) != 1) { printf("Read error.\n"); fclose(fp); return; }
//     char old[MAX_PASS], nw[MAX_PASS];
//     printf("Enter current password: ");
//     read_line(old, sizeof(old));
//     if (strcmp(old, a.password) != 0) {
//         printf("Incorrect current password.\n");
//         fclose(fp);
//         return;
//     }
//     printf("Enter new password: ");
//     read_line(nw, sizeof(nw));
//     if (strlen(nw) == 0) { printf("Password can't be empty.\n"); fclose(fp); return; }
//     strcpy(a.password, nw);
//     rewind(fp);
//     fwrite(&a, sizeof(Admin), 1, fp);
//     fclose(fp);
//     printf("Password changed successfully.\n");
// }


// void add_student() {
//     Student s;
//     int id = next_id_for_file(STUDENT_FILE, sizeof(Student));
//     s.id = id;
//     printf("\nAdd Student (ID = %d)\n", s.id);
//     printf("Name: ");
//     read_line(s.name, sizeof(s.name));
//     printf("Age: ");
//     if (scanf("%d", &s.age) != 1) { s.age = 0; }
//     clear_input_buffer();
//     printf("Department: ");
//     read_line(s.department, sizeof(s.department));
//     printf("Email: ");
//     read_line(s.email, sizeof(s.email));
//     printf("Phone: ");
//     read_line(s.phone, sizeof(s.phone));

//     FILE *fp = fopen(STUDENT_FILE, "ab");
//     if (!fp) { printf("Unable to open student file to write.\n"); return; }
//     fwrite(&s, sizeof(Student), 1, fp);
//     fclose(fp);
//     printf("Student added successfully with ID %d.\n", s.id);
// }

// void view_all_students() {
//     FILE *fp = fopen(STUDENT_FILE, "rb");
//     if (!fp) { printf("\nNo students found.\n"); return; }
//     Student s;
//     printf("\n--- Students ---\n");
//     while (fread(&s, sizeof(Student), 1, fp) == 1) {
//         printf("ID: %d | Name: %s | Age: %d | Dept: %s | Email: %s | Phone: %s\n",
//                s.id, s.name, s.age, s.department, s.email, s.phone);
//     }
//     fclose(fp);
// }

// int find_student_by_id(int id, Student *out) {
//     FILE *fp = fopen(STUDENT_FILE, "rb");
//     if (!fp) return 0;
//     Student s;
//     int found = 0;
//     while (fread(&s, sizeof(Student), 1, fp) == 1) {
//         if (s.id == id) {
//             if (out) *out = s;
//             found = 1; break;
//         }
//     }
//     fclose(fp);
//     return found;
// }

// void view_student() {
//     int id;
//     printf("Enter student ID to view: ");
//     if (scanf("%d", &id) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
//     clear_input_buffer();
//     Student s;
//     if (find_student_by_id(id, &s)) {
//         printf("ID: %d\nName: %s\nAge: %d\nDepartment: %s\nEmail: %s\nPhone: %s\n",
//                s.id, s.name, s.age, s.department, s.email, s.phone);
//     } else {
//         printf("Student with ID %d not found.\n", id);
//     }
// }

// void update_student() {
//     int id;
//     printf("Enter student ID to update: ");
//     if (scanf("%d", &id) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
//     clear_input_buffer();
//     FILE *fp = fopen(STUDENT_FILE, "rb+");
//     if (!fp) { printf("No student data.\n"); return; }
//     Student s;
//     int found = 0;
//     long pos;
//     while ((pos = ftell(fp)), fread(&s, sizeof(Student), 1, fp) == 1) {
//         if (s.id == id) {
//             found = 1;
//             printf("Current name (%s) -> New name (leave empty to keep): ", s.name);
//             char tmp[MAX_NAME]; read_line(tmp, sizeof(tmp));
//             if (strlen(tmp) > 0) strcpy(s.name, tmp);

//             printf("Current age (%d) -> New age (0 to keep): ", s.age);
//             int a; if (scanf("%d", &a) == 1) { if (a != 0) s.age = a; } clear_input_buffer();

//             printf("Current dept (%s) -> New dept (leave empty to keep): ", s.department);
//             read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(s.department, tmp);

//             printf("Current email (%s) -> New email (leave empty to keep): ", s.email);
//             read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(s.email, tmp);

//             printf("Current phone (%s) -> New phone (leave empty to keep): ", s.phone);
//             read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(s.phone, tmp);

//             // write back
//             fseek(fp, pos, SEEK_SET);
//             fwrite(&s, sizeof(Student), 1, fp);
//             printf("Student updated.\n");
//             break;
//         }
//     }
//     fclose(fp);
//     if (!found) printf("Student with ID %d not found.\n", id);
// }

// void delete_student() {
//     int id;
//     printf("Enter student ID to delete: ");
//     if (scanf("%d", &id) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
//     clear_input_buffer();
//     FILE *fp = fopen(STUDENT_FILE, "rb");
//     if (!fp) { printf("No student data.\n"); return; }
//     FILE *tmp = fopen("temp_students.dat", "wb");
//     if (!tmp) { fclose(fp); printf("Error.\n"); return; }
//     Student s;
//     int found = 0;
//     while (fread(&s, sizeof(Student), 1, fp) == 1) {
//         if (s.id == id) { found = 1; continue; }
//         fwrite(&s, sizeof(Student), 1, tmp);
//     }
//     fclose(fp); fclose(tmp);
//     remove(STUDENT_FILE);
//     rename("temp_students.dat", STUDENT_FILE);
//     if (found) printf("Student deleted.\n");
//     else printf("Student not found.\n");
// }


// void add_faculty() {
//     Faculty f;
//     int id = next_id_for_file(FACULTY_FILE, sizeof(Faculty));
//     f.id = id;
//     printf("\nAdd Faculty (ID = %d)\n", f.id);
//     printf("Name: ");
//     read_line(f.name, sizeof(f.name));
//     printf("Department: ");
//     read_line(f.department, sizeof(f.department));
//     printf("Email: ");
//     read_line(f.email, sizeof(f.email));
//     printf("Phone: ");
//     read_line(f.phone, sizeof(f.phone));

//     FILE *fp = fopen(FACULTY_FILE, "ab");
//     if (!fp) { printf("Unable to open faculty file to write.\n"); return; }
//     fwrite(&f, sizeof(Faculty), 1, fp);
//     fclose(fp);
//     printf("Faculty added with ID %d.\n", f.id);
// }

// void view_all_faculty() {
//     FILE *fp = fopen(FACULTY_FILE, "rb");
//     if (!fp) { printf("\nNo faculty found.\n"); return; }
//     Faculty f;
//     printf("\n--- Faculty ---\n");
//     while (fread(&f, sizeof(Faculty), 1, fp) == 1) {
//         printf("ID: %d | Name: %s | Dept: %s | Email: %s | Phone: %s\n",
//                f.id, f.name, f.department, f.email, f.phone);
//     }
//     fclose(fp);
// }

// int find_faculty_by_id(int id, Faculty *out) {
//     FILE *fp = fopen(FACULTY_FILE, "rb");
//     if (!fp) return 0;
//     Faculty f;
//     int found = 0;
//     while (fread(&f, sizeof(Faculty), 1, fp) == 1) {
//         if (f.id == id) {
//             if (out) *out = f;
//             found = 1; break;
//         }
//     }
//     fclose(fp);
//     return found;
// }

// void view_faculty() {
//     int id;
//     printf("Enter faculty ID to view: ");
//     if (scanf("%d", &id) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
//     clear_input_buffer();
//     Faculty f;
//     if (find_faculty_by_id(id, &f)) {
//         printf("ID: %d\nName: %s\nDepartment: %s\nEmail: %s\nPhone: %s\n",
//                f.id, f.name, f.department, f.email, f.phone);
//     } else {
//         printf("Faculty with ID %d not found.\n", id);
//     }
// }

// void update_faculty() {
//     int id;
//     printf("Enter faculty ID to update: ");
//     if (scanf("%d", &id) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
//     clear_input_buffer();
//     FILE *fp = fopen(FACULTY_FILE, "rb+");
//     if (!fp) { printf("No faculty data.\n"); return; }
//     Faculty f;
//     int found = 0;
//     long pos;
//     while ((pos = ftell(fp)), fread(&f, sizeof(Faculty), 1, fp) == 1) {
//         if (f.id == id) {
//             found = 1;
//             char tmp[MAX_NAME];
//             printf("Current name (%s) -> New name (leave empty to keep): ", f.name);
//             read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(f.name, tmp);

//             printf("Current dept (%s) -> New dept (leave empty to keep): ", f.department);
//             read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(f.department, tmp);

//             printf("Current email (%s) -> New email (leave empty to keep): ", f.email);
//             read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(f.email, tmp);

//             printf("Current phone (%s) -> New phone (leave empty to keep): ", f.phone);
//             read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(f.phone, tmp);

//             fseek(fp, pos, SEEK_SET);
//             fwrite(&f, sizeof(Faculty), 1, fp);
//             printf("Faculty updated.\n");
//             break;
//         }
//     }
//     fclose(fp);
//     if (!found) printf("Faculty with ID %d not found.\n", id);
// }

// void delete_faculty() {
//     int id;
//     printf("Enter faculty ID to delete: ");
//     if (scanf("%d", &id) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
//     clear_input_buffer();
//     FILE *fp = fopen(FACULTY_FILE, "rb");
//     if (!fp) { printf("No faculty data.\n"); return; }
//     FILE *tmp = fopen("temp_faculty.dat", "wb");
//     if (!tmp) { fclose(fp); printf("Error.\n"); return; }
//     Faculty f;
//     int found = 0;
//     while (fread(&f, sizeof(Faculty), 1, fp) == 1) {
//         if (f.id == id) { found = 1; continue; }
//         fwrite(&f, sizeof(Faculty), 1, tmp);
//     }
//     fclose(fp); fclose(tmp);
//     remove(FACULTY_FILE);
//     rename("temp_faculty.dat", FACULTY_FILE);
//     if (found) printf("Faculty deleted.\n");
//     else printf("Faculty not found.\n");
// }


// void assign_marks() {
//     int sid;
//     printf("Enter student ID to assign marks: ");
//     if (scanf("%d", &sid) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
//     clear_input_buffer();

//     Student s;
//     if (!find_student_by_id(sid, &s)) {
//         printf("Student with ID %d not found. Can't assign marks.\n", sid);
//         return;
//     }

//     Marks m;
//     m.student_id = sid;
//     printf("Course name: ");
//     read_line(m.course_name, sizeof(m.course_name));
//     printf("Marks (0-100): ");
//     if (scanf("%d", &m.marks) != 1) { m.marks = 0; }
//     clear_input_buffer();

//     // append
//     FILE *fp = fopen(MARKS_FILE, "ab");
//     if (!fp) { printf("Unable to open marks file for write.\n"); return; }
//     fwrite(&m, sizeof(Marks), 1, fp);
//     fclose(fp);
//     printf("Marks assigned to student %d for course %s.\n", sid, m.course_name);
// }

// void view_marks_for_student() {
//     int sid;
//     printf("Enter student ID to view marks: ");
//     if (scanf("%d", &sid) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
//     clear_input_buffer();

//     FILE *fp = fopen(MARKS_FILE, "rb");
//     if (!fp) { printf("No marks data.\n"); return; }
//     Marks m;
//     int found = 0;
//     int total = 0, count = 0;
//     printf("Marks for student ID %d:\n", sid);
//     while (fread(&m, sizeof(Marks), 1, fp) == 1) {
//         if (m.student_id == sid) {
//             found = 1;
//             printf("Course: %s | Marks: %d\n", m.course_name, m.marks);
//             total += m.marks; count++;
//         }
//     }
//     if (found) {
//         printf("Total courses: %d\n", count);
//         printf("Average marks: %.2f\n", count ? (double)total / count : 0.0);
//     } else {
//         printf("No marks found for this student.\n");
//     }
//     fclose(fp);
// }

// void delete_marks_for_student() {
//     int sid;
//     printf("Enter student ID to delete all marks: ");
//     if (scanf("%d", &sid) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
//     clear_input_buffer();

//     FILE *fp = fopen(MARKS_FILE, "rb");
//     if (!fp) { printf("No marks data.\n"); return; }
//     FILE *tmp = fopen("temp_marks.dat", "wb");
//     if (!tmp) { fclose(fp); printf("Error.\n"); return; }
//     Marks m;
//     int found = 0;
//     while (fread(&m, sizeof(Marks), 1, fp) == 1) {
//         if (m.student_id == sid) { found = 1; continue; }
//         fwrite(&m, sizeof(Marks), 1, tmp);
//     }
//     fclose(fp); fclose(tmp);
//     remove(MARKS_FILE);
//     rename("temp_marks.dat", MARKS_FILE);
//     if (found) printf("Marks deleted for student %d.\n", sid);
//     else printf("No marks found for student %d.\n", sid);
// }

// /* ------- Menus ------- */

// void student_menu() {
//     int ch;
//     do {
//         printf("\nStudent Menu\n1.Add Student\n2.View All Students\n3.View Student\n4.Update Student\n5.Delete Student\n6.Back\nChoice: ");
//         if (scanf("%d", &ch) != 1) { clear_input_buffer(); ch = 0; }
//         clear_input_buffer();
//         switch (ch) {
//             case 1: add_student(); break;
//             case 2: view_all_students(); break;
//             case 3: view_student(); break;
//             case 4: update_student(); break;
//             case 5: delete_student(); break;
//             case 6: break;
//             default: printf("Invalid choice.\n");
//         }
//     } while (ch != 6);
// }

// void faculty_menu() {
//     int ch;
//     do {
//         printf("\nFaculty Menu\n1.Add Faculty\n2.View All Faculty\n3.View Faculty\n4.Update Faculty\n5.Delete Faculty\n6.Back\nChoice: ");
//         if (scanf("%d", &ch) != 1) { clear_input_buffer(); ch = 0; }
//         clear_input_buffer();
//         switch (ch) {
//             case 1: add_faculty(); break;
//             case 2: view_all_faculty(); break;
//             case 3: view_faculty(); break;
//             case 4: update_faculty(); break;
//             case 5: delete_faculty(); break;
//             case 6: break;
//             default: printf("Invalid choice.\n");
//         }
//     } while (ch != 6);
// }

// void marks_menu() {
//     int ch;
//     do {
//         printf("\nMarks Menu\n1.Assign Marks\n2.View Marks for Student\n3.Delete Marks for Student\n4.Back\nChoice: ");
//         if (scanf("%d", &ch) != 1) { clear_input_buffer(); ch = 0; }
//         clear_input_buffer();
//         switch (ch) {
//             case 1: assign_marks(); break;
//             case 2: view_marks_for_student(); break;
//             case 3: delete_marks_for_student(); break;
//             case 4: break;
//             default: printf("Invalid choice.\n");
//         }
//     } while (ch != 4);
// }


// int main() {
//     printf("=== College Management System (C) ===\n");
//     ensure_admin_exists();
//     if (!admin_login()) {
//         printf("Exiting...\n");
//         return 0;
//     }
//     int ch;
//     do {
//         printf("\nMain Menu\n1.Student Management\n2.Faculty Management\n3.Marks Management\n4.Change Admin Password\n5.Exit\nChoice: ");
//         if (scanf("%d", &ch) != 1) { clear_input_buffer(); ch = 0; }
//         clear_input_buffer();
//         switch (ch) {
//             case 1: student_menu(); break;
//             case 2: faculty_menu(); break;
//                         case 3: marks_menu(); break;
//             case 4: change_admin_password(); break;
//             case 5: 
//                 printf("Exiting...\n");
//                 break;
//             default: 
//                 printf("Invalid choice.\n");
//         }
//     } while (ch != 5);

//     return 0;
// }

// #include<stdio.h>
// int i,n,x,top,choice,stack[100];
// void push();
// void pop();
// void display();
// void peek();
// int main()
// {
//     top=-1;
//     printf("Enter the arrays number:");
//     scanf("%d",&n);
//     printf("Enter the above choice number:");
//     printf("1.push\n");
//     printf("2.pop\n");
//     printf("3.display\n");
//     printf("4.peek\n");

//     printf("enter the choice number:");
//     scanf("%d",&choice);

//     do
//     {
//         switch(choice)
//         {
//             case 1:push();break;
//             case 2:pop();break;
//             case 3:display();break;
//             case 4:peek();break;
//             case 5:exit;break;

//             default:printf("Enter the valid number(1/2/3/4)");
//         }
//     }
//     while(choice!=5);

//     void push()
//     {
//         if(top>=-1)
//         {
//             printf("stack is overflow..");
//         }
//         else
//         {
//             printf("Enter the pushing element:");
//             scanf("%d",&x);
//             top++;
//             stack[top]=x;
//             printf("stack is inserted %d on the %d",top,stack[top]);
//         }
//     }

// }

// create book str auther,and price diplay detail of book ranging from 1000 to 1500.. 7 book auther (structure)

// #include <stdio.h>
// #include <string.h>

// #define MAX 3

// struct Book {
//     char title[50];
//     char author[50];
//     float price;
// };

// int main() {
//     struct Book books[MAX];
//     int i;

//     for (i = 0; i < MAX; i++) {
//         printf("\nEnter details of book %d:\n", i + 1);

//         printf("Title: ");
//         getchar(); 
//         fgets(books[i].title, sizeof(books[i].title), stdin);
//         books[i].title[strcspn(books[i].title, "\n")] = '\0'; 

//         printf("Author: ");
//         fgets(books[i].author, sizeof(books[i].author), stdin);
//         books[i].author[strcspn(books[i].author, "\n")] = '\0';

//         printf("Price: ");
//         scanf("%f", &books[i].price);
//     }

//     printf("\nBooks with price between 1000 and 1500:\n");
//     int found = 0;
//     for (i = 0; i < MAX; i++) {
//         if (books[i].price >= 1000 && books[i].price <= 1500) {
//             printf("\nTitle: %s\nAuthor: %s\nPrice: %f\n",
//                    books[i].title, books[i].author, books[i].price);
//             found = 1;
//         }
//     }

//     if (!found) {
//         printf("No books found in this price range.\n");
//     }

//     return 0;
// }


// #include<stdio.h>
// int i,n,x,top,choice,stack[100];
// void push();
// void pop();
// void display();
// void peek();
// int main()
// {
//     top=-1;
//     printf("Enter the arrays number:");
//     scanf("%d",&n);
//     printf("Enter the above choice number:");
//     printf("1.push\n");
//     printf("2.pop\n");
//     printf("3.display\n");
//     printf("4.peek\n");

//     printf("enter the choice number:");
//     scanf("%d",&choice);

//     do
//     {
//         switch(choice)
//         {
//             case 1:push();break;
//             case 2:pop();break;
//             case 3:display();break;
//             case 4:peek();break;
//             case 5:exit;break;

//             default:printf("Enter the valid number(1/2/3/4)");
//         }
//     }
//     while(choice!=5);

//     void push()
//     {
//         if(top>=-1)
//         {
//             printf("stack is overflow..");
//         }
//         else
//         {
//             printf("Enter the pushing element:");
//             scanf("%d",&x);
//             top++;
//             stack[top]=x;
//             printf("stack is inserted %d",top);
//         }
//     }

//     void pop()
//     {
//         if(top<=-1)
//         {
//             printf("Element is not found in the stack..");
//         }
//         else
//         {
//             printf("Enter the pop element:%d",stack[top]);
//             top--;
//         }
//     }

// }



//create book str auther,and price diplay detail of book ranging from 1000 to 1500.. 7 book auther (structure)

// #include <stdio.h>
// #include <string.h>

// #define MAX 3

// struct Book {
//     char title[50];
//     char author[50];
//     float price;
// };

// int main() {
//     struct Book books[MAX];
//     int i;

//     for (i = 0; i < MAX; i++) {
//         printf("\nEnter details of book %d:\n", i + 1);

//         printf("Title: ");
//         getchar(); 
//         fgets(books[i].title, sizeof(books[i].title), stdin);
//         books[i].title[strcspn(books[i].title, "\n")] = '\0'; 

//         printf("Author: ");
//         fgets(books[i].author, sizeof(books[i].author), stdin);
//         books[i].author[strcspn(books[i].author, "\n")] = '\0';

//         printf("Price: ");
//         scanf("%f", &books[i].price);
//     }

//     printf("\nBooks with price between 1000 and 1500:\n");
//     int found = 0;
//     for (i = 0; i < MAX; i++) {
//         if (books[i].price >= 1000 && books[i].price <= 1500) {
//             printf("\nTitle: %s\nAuthor: %s\nPrice: %f\n",
//                    books[i].title, books[i].author, books[i].price);
//             found = 1;
//         }
//     }

//     if (!found) {
//         printf("No books found in this price range.\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            str[j] = str[i]; 
            j++;
        }
        i++;
    }
    str[j] = '\0';

    printf("%s\n", str);
    return 0;
}
