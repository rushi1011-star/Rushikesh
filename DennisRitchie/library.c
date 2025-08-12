#include<stdio.h>
#include<string.h>                                            // Library Management System
 int main(){
     int date,fav_book,book,name,choice;
     char book_name[60];

     printf("Welcome to the Library Management System\n");

     printf("1.add your book\n");
     printf("2.view your book\n");
     printf("3.search book\n");
     printf("4.return book\n");
     printf("5.exit\n");

     printf("please enter your selection: ");
     scanf("%d", &choice);

     switch(choice){
        case 1:
            printf("enter your book name: ");
            scanf("%s", book_name);
            printf("enter your return date: ");
            scanf("%d", &date);
            printf("your book is added successfully\n");
            break;
        case 2:
           printf("view your book\n");
              printf("your book name is: %s\n", book_name);
              printf("your return date i s: %d\n", date);
              break;

        case 3:
            printf("enter your book name:");
            scanf("%s", book_name);

            if(strcmp(book_name, "shivaji maharaj") ) {
                printf("Book found: shivaji maharaj\n");
            } 
            else if(strcmp(book_name, "shymachi Aai") )  {
                printf("Book found: shymachi Aai\n");
            } 
            else if(strcmp(book_name, "yoga") ) {
                printf("Book found: yoga\n");
            } 
            else if(strcmp(book_name, "abhogi") ) {
                printf("Book found: abhogi\n");
            } 
            else if(strcmp(book_name, "shree man yogi") )
             {
                printf("Book found: shree man yogi\n");
            }
            else {
                printf("Book not found\n");
            }

            break;
        
        case 4:
            printf("enter your book name to return: ");
            scanf("%s", book_name);
            if(strcmp((book_name, "shivaji maharaj")==0) 
               strcmp((book_name, "shymachi Aai"))
               strcmp(book_name, "yoga")
               strcmp(book_name, "abhogi")
               strcmp(book_name, "shree man yogi") {
               printf("Book '%s' returned successfully\n", book_name);
           } else {
               printf("Book not found in list\n");
           }
            break;
        case 5:
            printf("Exiting the Library Management System. Goodbye!\n");
           break;

        default:
            printf("Invalid choice. Please try again.\n");
     }
     return 0;

   }
