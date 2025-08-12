#include <iostream>
#include <string>
using namespace std;

struct Patient {
    string name;
    int age;
    string gender;
    string disease;
};

struct Doctor {
    string name;
    string specialization;
    string gender;
};

struct Appointment {
    string patientName;
    string doctorName;
    string date;
    string time;
};

string hospitalName = "Sant Gajanan Multispeciality Hospital";
string hospitalAddress = "Chinchewadi, Mahagaon";

// Function declarations
void showHospitalInfo();
void addPatient(Patient &p);
void addDoctor(Doctor &d);
void addAppointment(Appointment &a);
void showPatient(const Patient &p);
void showDoctor(const Doctor &d);
void showAppointment(const Appointment &a);

int main() {
    Patient p1;
    Doctor d1;
    Appointment a1;
    int choice;

    while (true) {
        cout << "\n\nMenu:\n";
        cout << "1. Show Hospital Info\n";
        cout << "2. Add Patient Details\n";
        cout << "3. Add Doctor Details\n";
        cout << "4. Add Appointment\n";
        cout << "5. Show Patient Details\n";
        cout << "6. Show Doctor Details\n";
        cout << "7. Show Appointment Details\n";
        cout << "8. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
                showHospitalInfo();
                break;
            case 2:
                addPatient(p1);
                break;
            case 3:
                addDoctor(d1);
                break;
            case 4:
                addAppointment(a1);
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
                cout << "Exiting program. Thank you!\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}

void showHospitalInfo() {
    cout << "\nHospital Name: " << hospitalName;
    cout << "\nAddress: " << hospitalAddress;
    cout << "\nTotal Beds: 150";
    cout << "\nEmergency Services: Available\n";
}

void addPatient(Patient &p) {
    cout << "Enter Patient Name: ";
    getline(cin, p.name);

    cout << "Enter Age: ";
    cin >> p.age;
    cin.ignore();

    cout << "Enter Gender: ";
    getline(cin, p.gender);

    cout << "Enter Disease: ";
    getline(cin, p.disease);

    cout << "Length of Name: " << p.name.length() << endl;
    if (p.name.find('a') != string::npos || p.name.find('A') != string::npos) {
        cout << "Name contains the letter 'a'\n";
    }
}

void addDoctor(Doctor &d) {
    cout << "Enter Doctor Name: ";
    getline(cin, d.name);

    cout << "Enter Specialization: ";
    getline(cin, d.specialization);

    cout << "Enter Gender: ";
    getline(cin, d.gender);

    cout << "Doctor name copied using assignment.\n";
    string tempName = d.name;
    cout << "Copied Name: " << tempName << endl;
}

void addAppointment(Appointment &a) {
    cout << "Enter Patient Name: ";
    getline(cin, a.patientName);

    cout << "Enter Doctor Name: ";
    getline(cin, a.doctorName);

    cout << "Enter Appointment Date (dd/mm/yyyy): ";
    getline(cin, a.date);

    cout << "Enter Time (e.g. 10:30AM): ";
    getline(cin, a.time);

    a.date += " at " + a.time;
    cout << "Appointment Date-Time: " << a.date << endl;
}

void showPatient(const Patient &p) {
    cout << "\n--- Patient Details ---\n";
    cout << "Name: " << p.name << "\n";
    cout << "Age: " << p.age << "\n";
    cout << "Gender: " << p.gender << "\n";
    cout << "Disease: " << p.disease << "\n";
}

void showDoctor(const Doctor &d) {
    cout << "\n--- Doctor Details ---\n";
    cout << "Name: " << d.name << "\n";
    cout << "Specialization: " << d.specialization << "\n";
    cout << "Gender: " << d.gender << "\n";
}

void showAppointment(const Appointment &a) {
    cout << "\n--- Appointment Details ---\n";
    cout << "Patient: " << a.patientName << "\n";
    cout << "Doctor: " << a.doctorName << "\n";
    cout << "Appointment: " << a.date << "\n";
}
