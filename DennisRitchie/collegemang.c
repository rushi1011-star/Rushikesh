#include <stdio.h>

struct Student {
    char studentname[50];
    int studentid;
    char department[20];
};

void addStudent() {
    struct Student b1;
    int number;

    printf("Enter the student name: ");
    scanf(" %[^\n]", b1.studentname); 

    printf("Enter the student ID: ");
    scanf("%d", &b1.studentid);

    printf("Select department:\n");
    printf("1. CSE\n2. ENTC\n3. Civil\n4. AI\n");
    printf("Choose department number: ");
    scanf("%d", &number);
 
    switch (number) {
        case 1: strcpy(b1.department, "CSE"); break;
        case 2: strcpy(b1.department, "ENTC"); break;
        case 3: strcpy(b1.department, "Civil"); break;
        case 4: strcpy(b1.department, "AI"); break;
        default: strcpy(b1.department, "Unknown"); break;
    }

    printf("\n--- Student Info Added ---\n");
    printf("Name: %s\n", b1.studentname);
    printf("ID: %d\n", b1.studentid);
    printf("Department: %s\n", b1.department);
}

int main() {
    int choice;

    printf("----- College Management Menu -----\n");
    printf("1. Add Student\n");
    printf("2. Add Faculty\n");
    printf("3. Enter Student Marks\n");
    printf("4. Pay Student Fees\n");
    printf("5. Display Student Info\n");
    printf("6. Display Faculty Info\n");
    printf("7. Exit\n");

    printf("\nEnter your choice number: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            addStudent();
            break;
        default:
            printf("Option not implemented yet.\n");
    }

    return 0;
}
