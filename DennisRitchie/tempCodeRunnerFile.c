#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STUDENT_FILE "students.dat"
#define FACULTY_FILE "faculty.dat"
#define MARKS_FILE   "marks.dat"
#define ADMIN_FILE   "admin.dat"

#define MAX_NAME 100
#define MAX_DEPT 50
#define MAX_USER 50
#define MAX_PASS 50


typedef struct {
    int id;                   
    char name[MAX_NAME];
    int age;
    char department[MAX_DEPT];
    char email[100];
    char phone[20];
} Student;

typedef struct {
    int id;                    
    char name[MAX_NAME];
    char department[MAX_DEPT];
    char email[100];
    char phone[20];
} Faculty;

typedef struct {
    int student_id;
    char course_name[100];
    int marks;    
} Marks;

typedef struct {
    char username[MAX_USER];
    char password[MAX_PASS]; 
} Admin;


void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void read_line(char *buffer, int size) {
    if (fgets(buffer, size, stdin)) {
        size_t ln = strlen(buffer);
        if (ln > 0 && buffer[ln - 1] == '\n') buffer[ln - 1] = '\0';
    } else {
        buffer[0] = '\0';
    }
}

void press_any_key() {
    printf("\nPress Enter to continue...");
    clear_input_buffer();
}

int next_id_for_file(const char *filename, size_t rec_size) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) return 1;
    if (fseek(fp, -((long)rec_size), SEEK_END) != 0) {
     
        fclose(fp);
        return 1;
    }
    char *buf = malloc(rec_size);
    if (!buf) { fclose(fp); return 1; }
    if (fread(buf, rec_size, 1, fp) != 1) {
        free(buf);
        fclose(fp);
        return 1;
    }

    int id;
    memcpy(&id, buf, sizeof(int));
    free(buf);
    fclose(fp);
    return id + 1;
}


void ensure_admin_exists() {
    FILE *fp = fopen(ADMIN_FILE, "rb");
    if (fp) { fclose(fp); return; } 
   
    Admin a;
    strcpy(a.username, "admin");
    strcpy(a.password, "admin"); 
    fp = fopen(ADMIN_FILE, "wb");
    if (!fp) { printf("Error creating admin file\n"); return; }
    fwrite(&a, sizeof(Admin), 1, fp);
    fclose(fp);
    printf("Default admin created (username: admin, password: admin). Please change it after login.\n");
}

int admin_login() {
    ensure_admin_exists();
    char username[MAX_USER], password[MAX_PASS];
    printf("Login\n-----\n");
    printf("Username: ");
    read_line(username, sizeof(username));
    printf("Password: ");
    read_line(password, sizeof(password));
    FILE *fp = fopen(ADMIN_FILE, "rb");
    if (!fp) { printf("No admin data. Contact system admin.\n"); return 0; }
    Admin a;
    int ok = 0;
    while (fread(&a, sizeof(Admin), 1, fp) == 1) {
        if (strcmp(a.username, username) == 0 && strcmp(a.password, password) == 0) {
            ok = 1; break;
        }
    }
    fclose(fp);
    if (!ok) {
        printf("Invalid credentials.\n");
    }
    return ok;
}

void change_admin_password() {
    FILE *fp = fopen(ADMIN_FILE, "rb+");
    if (!fp) { printf("Admin settings file missing.\n"); return; }
    Admin a;
    if (fread(&a, sizeof(Admin), 1, fp) != 1) { printf("Read error.\n"); fclose(fp); return; }
    char old[MAX_PASS], nw[MAX_PASS];
    printf("Enter current password: ");
    read_line(old, sizeof(old));
    if (strcmp(old, a.password) != 0) {
        printf("Incorrect current password.\n");
        fclose(fp);
        return;
    }
    printf("Enter new password: ");
    read_line(nw, sizeof(nw));
    if (strlen(nw) == 0) { printf("Password can't be empty.\n"); fclose(fp); return; }
    strcpy(a.password, nw);
    rewind(fp);
    fwrite(&a, sizeof(Admin), 1, fp);
    fclose(fp);
    printf("Password changed successfully.\n");
}


void add_student() {
    Student s;
    int id = next_id_for_file(STUDENT_FILE, sizeof(Student));
    s.id = id;
    printf("\nAdd Student (ID = %d)\n", s.id);
    printf("Name: ");
    read_line(s.name, sizeof(s.name));
    printf("Age: ");
    if (scanf("%d", &s.age) != 1) { s.age = 0; }
    clear_input_buffer();
    printf("Department: ");
    read_line(s.department, sizeof(s.department));
    printf("Email: ");
    read_line(s.email, sizeof(s.email));
    printf("Phone: ");
    read_line(s.phone, sizeof(s.phone));

    FILE *fp = fopen(STUDENT_FILE, "ab");
    if (!fp) { printf("Unable to open student file to write.\n"); return; }
    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);
    printf("Student added successfully with ID %d.\n", s.id);
}

void view_all_students() {
    FILE *fp = fopen(STUDENT_FILE, "rb");
    if (!fp) { printf("\nNo students found.\n"); return; }
    Student s;
    printf("\n--- Students ---\n");
    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        printf("ID: %d | Name: %s | Age: %d | Dept: %s | Email: %s | Phone: %s\n",
               s.id, s.name, s.age, s.department, s.email, s.phone);
    }
    fclose(fp);
}

int find_student_by_id(int id, Student *out) {
    FILE *fp = fopen(STUDENT_FILE, "rb");
    if (!fp) return 0;
    Student s;
    int found = 0;
    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        if (s.id == id) {
            if (out) *out = s;
            found = 1; break;
        }
    }
    fclose(fp);
    return found;
}

void view_student() {
    int id;
    printf("Enter student ID to view: ");
    if (scanf("%d", &id) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
    clear_input_buffer();
    Student s;
    if (find_student_by_id(id, &s)) {
        printf("ID: %d\nName: %s\nAge: %d\nDepartment: %s\nEmail: %s\nPhone: %s\n",
               s.id, s.name, s.age, s.department, s.email, s.phone);
    } else {
        printf("Student with ID %d not found.\n", id);
    }
}

void update_student() {
    int id;
    printf("Enter student ID to update: ");
    if (scanf("%d", &id) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
    clear_input_buffer();
    FILE *fp = fopen(STUDENT_FILE, "rb+");
    if (!fp) { printf("No student data.\n"); return; }
    Student s;
    int found = 0;
    long pos;
    while ((pos = ftell(fp)), fread(&s, sizeof(Student), 1, fp) == 1) {
        if (s.id == id) {
            found = 1;
            printf("Current name (%s) -> New name (leave empty to keep): ", s.name);
            char tmp[MAX_NAME]; read_line(tmp, sizeof(tmp));
            if (strlen(tmp) > 0) strcpy(s.name, tmp);

            printf("Current age (%d) -> New age (0 to keep): ", s.age);
            int a; if (scanf("%d", &a) == 1) { if (a != 0) s.age = a; } clear_input_buffer();

            printf("Current dept (%s) -> New dept (leave empty to keep): ", s.department);
            read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(s.department, tmp);

            printf("Current email (%s) -> New email (leave empty to keep): ", s.email);
            read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(s.email, tmp);

            printf("Current phone (%s) -> New phone (leave empty to keep): ", s.phone);
            read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(s.phone, tmp);

            // write back
            fseek(fp, pos, SEEK_SET);
            fwrite(&s, sizeof(Student), 1, fp);
            printf("Student updated.\n");
            break;
        }
    }
    fclose(fp);
    if (!found) printf("Student with ID %d not found.\n", id);
}

void delete_student() {
    int id;
    printf("Enter student ID to delete: ");
    if (scanf("%d", &id) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
    clear_input_buffer();
    FILE *fp = fopen(STUDENT_FILE, "rb");
    if (!fp) { printf("No student data.\n"); return; }
    FILE *tmp = fopen("temp_students.dat", "wb");
    if (!tmp) { fclose(fp); printf("Error.\n"); return; }
    Student s;
    int found = 0;
    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        if (s.id == id) { found = 1; continue; }
        fwrite(&s, sizeof(Student), 1, tmp);
    }
    fclose(fp); fclose(tmp);
    remove(STUDENT_FILE);
    rename("temp_students.dat", STUDENT_FILE);
    if (found) printf("Student deleted.\n");
    else printf("Student not found.\n");
}


void add_faculty() {
    Faculty f;
    int id = next_id_for_file(FACULTY_FILE, sizeof(Faculty));
    f.id = id;
    printf("\nAdd Faculty (ID = %d)\n", f.id);
    printf("Name: ");
    read_line(f.name, sizeof(f.name));
    printf("Department: ");
    read_line(f.department, sizeof(f.department));
    printf("Email: ");
    read_line(f.email, sizeof(f.email));
    printf("Phone: ");
    read_line(f.phone, sizeof(f.phone));

    FILE *fp = fopen(FACULTY_FILE, "ab");
    if (!fp) { printf("Unable to open faculty file to write.\n"); return; }
    fwrite(&f, sizeof(Faculty), 1, fp);
    fclose(fp);
    printf("Faculty added with ID %d.\n", f.id);
}

void view_all_faculty() {
    FILE *fp = fopen(FACULTY_FILE, "rb");
    if (!fp) { printf("\nNo faculty found.\n"); return; }
    Faculty f;
    printf("\n--- Faculty ---\n");
    while (fread(&f, sizeof(Faculty), 1, fp) == 1) {
        printf("ID: %d | Name: %s | Dept: %s | Email: %s | Phone: %s\n",
               f.id, f.name, f.department, f.email, f.phone);
    }
    fclose(fp);
}

int find_faculty_by_id(int id, Faculty *out) {
    FILE *fp = fopen(FACULTY_FILE, "rb");
    if (!fp) return 0;
    Faculty f;
    int found = 0;
    while (fread(&f, sizeof(Faculty), 1, fp) == 1) {
        if (f.id == id) {
            if (out) *out = f;
            found = 1; break;
        }
    }
    fclose(fp);
    return found;
}

void view_faculty() {
    int id;
    printf("Enter faculty ID to view: ");
    if (scanf("%d", &id) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
    clear_input_buffer();
    Faculty f;
    if (find_faculty_by_id(id, &f)) {
        printf("ID: %d\nName: %s\nDepartment: %s\nEmail: %s\nPhone: %s\n",
               f.id, f.name, f.department, f.email, f.phone);
    } else {
        printf("Faculty with ID %d not found.\n", id);
    }
}

void update_faculty() {
    int id;
    printf("Enter faculty ID to update: ");
    if (scanf("%d", &id) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
    clear_input_buffer();
    FILE *fp = fopen(FACULTY_FILE, "rb+");
    if (!fp) { printf("No faculty data.\n"); return; }
    Faculty f;
    int found = 0;
    long pos;
    while ((pos = ftell(fp)), fread(&f, sizeof(Faculty), 1, fp) == 1) {
        if (f.id == id) {
            found = 1;
            char tmp[MAX_NAME];
            printf("Current name (%s) -> New name (leave empty to keep): ", f.name);
            read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(f.name, tmp);

            printf("Current dept (%s) -> New dept (leave empty to keep): ", f.department);
            read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(f.department, tmp);

            printf("Current email (%s) -> New email (leave empty to keep): ", f.email);
            read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(f.email, tmp);

            printf("Current phone (%s) -> New phone (leave empty to keep): ", f.phone);
            read_line(tmp, sizeof(tmp)); if (strlen(tmp) > 0) strcpy(f.phone, tmp);

            fseek(fp, pos, SEEK_SET);
            fwrite(&f, sizeof(Faculty), 1, fp);
            printf("Faculty updated.\n");
            break;
        }
    }
    fclose(fp);
    if (!found) printf("Faculty with ID %d not found.\n", id);
}

void delete_faculty() {
    int id;
    printf("Enter faculty ID to delete: ");
    if (scanf("%d", &id) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
    clear_input_buffer();
    FILE *fp = fopen(FACULTY_FILE, "rb");
    if (!fp) { printf("No faculty data.\n"); return; }
    FILE *tmp = fopen("temp_faculty.dat", "wb");
    if (!tmp) { fclose(fp); printf("Error.\n"); return; }
    Faculty f;
    int found = 0;
    while (fread(&f, sizeof(Faculty), 1, fp) == 1) {
        if (f.id == id) { found = 1; continue; }
        fwrite(&f, sizeof(Faculty), 1, tmp);
    }
    fclose(fp); fclose(tmp);
    remove(FACULTY_FILE);
    rename("temp_faculty.dat", FACULTY_FILE);
    if (found) printf("Faculty deleted.\n");
    else printf("Faculty not found.\n");
}


void assign_marks() {
    int sid;
    printf("Enter student ID to assign marks: ");
    if (scanf("%d", &sid) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
    clear_input_buffer();

    Student s;
    if (!find_student_by_id(sid, &s)) {
        printf("Student with ID %d not found. Can't assign marks.\n", sid);
        return;
    }

    Marks m;
    m.student_id = sid;
    printf("Course name: ");
    read_line(m.course_name, sizeof(m.course_name));
    printf("Marks (0-100): ");
    if (scanf("%d", &m.marks) != 1) { m.marks = 0; }
    clear_input_buffer();

    // append
    FILE *fp = fopen(MARKS_FILE, "ab");
    if (!fp) { printf("Unable to open marks file for write.\n"); return; }
    fwrite(&m, sizeof(Marks), 1, fp);
    fclose(fp);
    printf("Marks assigned to student %d for course %s.\n", sid, m.course_name);
}

void view_marks_for_student() {
    int sid;
    printf("Enter student ID to view marks: ");
    if (scanf("%d", &sid) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
    clear_input_buffer();

    FILE *fp = fopen(MARKS_FILE, "rb");
    if (!fp) { printf("No marks data.\n"); return; }
    Marks m;
    int found = 0;
    int total = 0, count = 0;
    printf("Marks for student ID %d:\n", sid);
    while (fread(&m, sizeof(Marks), 1, fp) == 1) {
        if (m.student_id == sid) {
            found = 1;
            printf("Course: %s | Marks: %d\n", m.course_name, m.marks);
            total += m.marks; count++;
        }
    }
    if (found) {
        printf("Total courses: %d\n", count);
        printf("Average marks: %.2f\n", count ? (double)total / count : 0.0);
    } else {
        printf("No marks found for this student.\n");
    }
    fclose(fp);
}

void delete_marks_for_student() {
    int sid;
    printf("Enter student ID to delete all marks: ");
    if (scanf("%d", &sid) != 1) { clear_input_buffer(); printf("Invalid input\n"); return; }
    clear_input_buffer();

    FILE *fp = fopen(MARKS_FILE, "rb");
    if (!fp) { printf("No marks data.\n"); return; }
    FILE *tmp = fopen("temp_marks.dat", "wb");
    if (!tmp) { fclose(fp); printf("Error.\n"); return; }
    Marks m;
    int found = 0;
    while (fread(&m, sizeof(Marks), 1, fp) == 1) {
        if (m.student_id == sid) { found = 1; continue; }
        fwrite(&m, sizeof(Marks), 1, tmp);
    }
    fclose(fp); fclose(tmp);
    remove(MARKS_FILE);
    rename("temp_marks.dat", MARKS_FILE);
    if (found) printf("Marks deleted for student %d.\n", sid);
    else printf("No marks found for student %d.\n", sid);
}

void student_menu() {
    int ch;
    do {
        printf("\nStudent Menu\n1.Add Student\n2.View All Students\n3.View Student\n4.Update Student\n5.Delete Student\n6.Back\nChoice: ");
        if (scanf("%d", &ch) != 1) { clear_input_buffer(); ch = 0; }
        clear_input_buffer();
        switch (ch) {
            case 1: add_student(); break;
            case 2: view_all_students(); break;
            case 3: view_student(); break;
            case 4: update_student(); break;
            case 5: delete_student(); break;
            case 6: break;
            default: printf("Invalid choice.\n");
        }
    } while (ch != 6);
}

void faculty_menu() {
    int ch;
    do {
        printf("\nFaculty Menu\n1.Add Faculty\n2.View All Faculty\n3.View Faculty\n4.Update Faculty\n5.Delete Faculty\n6.Back\nChoice: ");
        if (scanf("%d", &ch) != 1) { clear_input_buffer(); ch = 0; }
        clear_input_buffer();
        switch (ch) {
            case 1: add_faculty(); break;
            case 2: view_all_faculty(); break;
            case 3: view_faculty(); break;
            case 4: update_faculty(); break;
            case 5: delete_faculty(); break;
            case 6: break;
            default: printf("Invalid choice.\n");
        }
    } while (ch != 6);
}

void marks_menu() {
    int ch;
    do {
        printf("\nMarks Menu\n1.Assign Marks\n2.View Marks for Student\n3.Delete Marks for Student\n4.Back\nChoice: ");
        if (scanf("%d", &ch) != 1) { clear_input_buffer(); ch = 0; }
        clear_input_buffer();
        switch (ch) {
            case 1: assign_marks(); break;
            case 2: view_marks_for_student(); break;
            case 3: delete_marks_for_student(); break;
            case 4: break;
            default: printf("Invalid choice.\n");
        }
    } while (ch != 4);
}


int main() {
    printf("=== College Management System (C) ===\n");
    ensure_admin_exists();
    if (!admin_login()) {
        printf("Exiting...\n");
        return 0;
    }
    int ch;
    do {
        printf("\nMain Menu\n1.Student Management\n2.Faculty Management\n3.Marks Management\n4.Change Admin Password\n5.Exit\nChoice: ");
        if (scanf("%d", &ch) != 1) { clear_input_buffer(); ch = 0; }
        clear_input_buffer();
        switch (ch) {
            case 1: student_menu(); break;
            case 2: faculty_menu(); break;
                        case 3: marks_menu(); break;
            case 4: change_admin_password(); break;
            case 5: 
                printf("Exiting...\n");
                break;
            default: 
                printf("Invalid choice.\n");
        }
    } while (ch != 5);

    return 0;
}
