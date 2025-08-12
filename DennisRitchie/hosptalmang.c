//Patient record handling, doctor details, appointments (structures & files).
#include <stdio.h>
#include <string.h>

struct Patient {
    char name[120];
    int age;
    char gender[10];
    char disease[50];
};

struct Doctor {
    char name[50];
    char specialization[50];
    char gender[10];
};

struct Appointment {
    char patientName[120];
    char doctorName[120];
    char date[20];
    char time[10];
};

char hospitalName[100] = "sant gajanan multispeciality hospital";
char hospitalAddress[100] = "chinchewadi,mahgoan";

void showHospitalInfo();
void addPatient(struct Patient *p);
void addDoctor(struct Doctor *d);
void addAppointment(struct Appointment *a);
void showPatient(struct Patient p);
void showDoctor(struct Doctor d);
void showAppointment(struct Appointment a);

int main() {
    struct Patient p1;
    struct Doctor d1;
    struct Appointment a1;
    int choice;
    while (1) {
        printf("\n\nMenu:\n");
        printf("1. Show Hospital Info\n");
        printf("2. Add Patient Details\n");
        printf("3. Add Doctor Details\n");
        printf("4. Add Appointment\n");
        printf("5. Show Patient Details\n");
        printf("6. Show Doctor Details\n");
        printf("7. Show Appointment Details\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  
        switch (choice) {
            case 1:
                showHospitalInfo();
                break;
            case 2:
                addPatient(&p1);
                break;
            case 3:
                addDoctor(&d1);
                break;
            case 4:
                addAppointment(&a1);
                break;
            case 5:
                showPatient(p1);
                break;
            case 6:
                showDoctor(d1);
                break;
            case 7:
                showAppointment(a1);
                break;
            case 8:
                printf("Exiting program. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

void showHospitalInfo() {
    printf("\nHospital Name: %s", hospitalName);
    printf("\nAddress: %s", hospitalAddress);
    printf("\nTotal Beds: 150");
    printf("\nEmergency Services: Available\n");
}

void addPatient(struct Patient *p){
    printf("Enter Patient Name: ");
    gets(p->name);
    printf("Enter Age: ");
    scanf("%d", &p->age);
    getchar();
    printf("Enter Gender: ");
    gets(p->gender);
    printf("Enter Disease: ");
    gets(p->disease);

    printf("Length of Name: %d\n", strlen(p->name));
    if (strchr(p->name, 'a')) {
        printf("Name contains the letter 'a'\n");
    }
}

void addDoctor(struct Doctor *d) {
    printf("Enter Doctor Name: ");
    gets(d->name);
    printf("Enter Specialization: ");
    gets(d->specialization);
    printf("Enter Gender: ");
    gets(d->gender);

    printf("Doctor name copied using strcpy.\n");
    char tempName[50];
    strcpy(tempName, d->name);
    printf("Copied Name: %s\n", tempName);
}

void addAppointment(struct Appointment *a) {
    printf("Enter Patient Name: ");
    gets(a->patientName);
    printf("Enter Doctor Name: ");
    gets(a->doctorName);
    printf("Enter Appointment Date (dd/mm/yyyy): ");
    gets(a->date);
    printf("Enter Time (e.g. 10:30AM): ");
    gets(a->time);

    strcat(a->date, " at ");
    strcat(a->date, a->time); 
    printf("Appointment Date-Time: %s\n", a->date);
}

void showPatient(struct Patient p) {
    printf("\n--- Patient Details ---\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %s\n", p.gender);
    printf("Disease: %s\n", p.disease);
}

void showDoctor(struct Doctor d) {
    printf("\n--- Doctor Details ---\n");
    printf("Name: %s\n", d.name);
    printf("Specialization: %s\n", d.specialization);
    printf("Gender: %s\n", d.gender);
}

void showAppointment(struct Appointment a) {
    printf("\n--- Appointment Details ---\n");
    printf("Patient: %s\n", a.patientName);
    printf("Doctor: %s\n", a.doctorName);
    printf("Appointment: %s\n", a.date); 
}