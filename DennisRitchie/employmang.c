#include <stdio.h>
#include <time.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    char designation[50];
    char department[50];
    struct Date joiningDate;
    float salary;
};

int isValidDate(struct Date d1, struct Date currentDate) {
    if (d1.year < currentDate.year) return 1;
    if (d1.year > currentDate.year) return 0;
    if (d1.month < currentDate.month) return 1;
    if (d1.month > currentDate.month) return 0;
    if (d1.day <= currentDate.day) return 1;
    return 0;
}

int isEarlier(struct Date d1, struct Date d2) {
    if (d1.year < d2.year) return 1;
    if (d1.year > d2.year) return 0;
    if (d1.month < d2.month) return 1;
    if (d1.month > d2.month) return 0;
    if (d1.day < d2.day) return 1;
    return 0;
}

void inputDateWithSlashes(struct Date *d, struct Date currentDate) {
    char dateInput[11];
    int count = 0;
    char c;

    while (1) {
        printf("Enter Joining Date (DDMMYYYY): ");
        count = 0;
        while ((c = getchar()) != '\n' && c != EOF) { }

        while (count < 10) {
            c = getchar();
            if (c >= '0' && c <= '9') {
                dateInput[count] = c;
                count++;
                printf("%c", c);
                if (count == 2 || count == 4) {
                    printf("/");
                }
            } else if (c == '\n') {
                break;
            }
        }

        dateInput[count] = '\0';

        char formattedDate[11] = {0};
        int i, j = 0;
        for (i = 0; i < count; i++) {
            formattedDate[j++] = dateInput[i];
            if (i == 1 || i == 3) {
                formattedDate[j++] = '/';
            }
        }
        formattedDate[j] = '\0';

        if (sscanf(formattedDate, "%2d/%2d/%4d", &d->day, &d->month, &d->year) != 3) {
            printf("\nInvalid input format. Please enter 8 digits (DDMMYYYY).\n");
            continue;
        }

        if (!isValidDate(*d, currentDate)) {
            printf("\nError: Date must not be after today's date.\n");
        } else if (count < 8) {
            printf("\nError: Incomplete date.\n");
        } else {
            printf("\n");
            break;
        }

        while ((c = getchar()) != '\n' && c != EOF) { }
    }
}

int main() {
    struct Employee emp[10];
    struct Date currentDate;
    int EMP_COUNT = 2;
    int i, seniorIndex = 0;

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    currentDate.day = tm.tm_mday;
    currentDate.month = tm.tm_mon + 1;
    currentDate.year = tm.tm_year + 1900;

    printf("Today's Date: %02d-%02d-%04d\n", currentDate.day, currentDate.month, currentDate.year);

    for (i = 0; i < EMP_COUNT; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        while (getchar() != '\n');

        printf("Enter Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Designation: ");
        scanf(" %[^\n]", emp[i].designation);

        printf("Enter Department: ");
        scanf(" %[^\n]", emp[i].department);

        inputDateWithSlashes(&emp[i].joiningDate, currentDate);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
        while (getchar() != '\n');
    }

    // Find most senior employee
    for (i = 1; i < EMP_COUNT; i++) {
        if (isEarlier(emp[i].joiningDate, emp[seniorIndex].joiningDate)) {
            seniorIndex = i;
        } else if (
            emp[i].joiningDate.day == emp[seniorIndex].joiningDate.day &&
            emp[i].joiningDate.month == emp[seniorIndex].joiningDate.month &&
            emp[i].joiningDate.year == emp[seniorIndex].joiningDate.year
        ) {
            // Tie breaker question
            char answer1[50], answer2[50];
            float perc1, perc2;

            printf("\nBoth employees '%s' and '%s' have the same joining date.\n", emp[seniorIndex].name, emp[i].name);
            printf("Tie-breaker Question: long from of HTTP????\n");

            printf("%s's answer: ", emp[seniorIndex].name);
            scanf(" %[^\n]", answer1);

            printf("%s's answer: ", emp[i].name);
            scanf(" %[^\n]", answer2);

            int correct1 = (strcasecmp(answer1, "HyperText Transfer Protocol") == 0 || strcasecmp(answer1, "HyperText Transfer Protocol") == 0);
            int correct2 = (strcasecmp(answer2, "HyperText Transfer Protocol") == 0 || strcasecmp(answer2, "HyperText Transfer Protocol") == 0);

            if (correct2 && !correct1) {
                seniorIndex = i;
            } else if (!correct2 && !correct1) {
                printf("Both answers are incorrect. Keeping first employee as senior.\n");
            } else if (correct1 && correct2) {
                // Ask for percentage
                printf("\nBoth answered correctly. Asking for percentage.\n");

                printf("%s's percentage: ", emp[seniorIndex].name);
                scanf("%f", &perc1);

                printf("%s's percentage: ", emp[i].name);
                scanf("%f", &perc2);

                if (perc2 > perc1) {
                    seniorIndex = i;
                } else if (perc1 == perc2) {
                    printf("Both have equal percentage. Keeping first as senior.\n");
                }
            }
        }
    }

    printf("\n--- Most Senior Employee ---\n");
    printf("ID: %d\n", emp[seniorIndex].id);
    printf("Name: %s\n", emp[seniorIndex].name);
    printf("Designation: %s\n", emp[seniorIndex].designation);
    printf("Department: %s\n", emp[seniorIndex].department);
    printf("Joining Date: %02d-%02d-%04d\n", emp[seniorIndex].joiningDate.day,
           emp[seniorIndex].joiningDate.month, emp[seniorIndex].joiningDate.year);
    printf("Salary: %.2f\n", emp[seniorIndex].salary);

    return 0;
}
