#include <stdio.h>
#include <string.h>

#define MaxPatient 100
#define MaxDoctor 10

// Structure definitions
struct patient {
    int id;
    char name[50];
    int age;
    char gender;
    char address[50];
    char contact[15];
    char medicalhistory[100];
};

struct doctor {
    int id;
    char name[50];
    char specialty[50];
};

// Function prototypes
int mainmenu();
int addPatient(struct patient patients[], int patientCount);
void BookReservation(struct patient patients[], int patientCount, struct doctor doctors[], int doctorCount);
void searchPatient(struct patient patients[], int patientCount);
void showPatient(struct patient patients[], int patientCount);
void showDoctors(struct doctor doctors[], int doctorCount);
void availableDoctor(struct doctor doctors[], int doctorCount);



int main() {
    mainmenu();
    return 0;
}






/*********************************************** MainMenu *****************************************/

int mainmenu() {
    struct patient patients[MaxPatient];
    struct doctor doctors[MaxDoctor] = {
        {1, "Dr. Smith", "Cardiologist"},
        {2, "Dr. Jones", "Dermatologist"},
        {3, "Dr. Brown", "Orthopedic"},
        {4, "Dr. Taylor", "Neurologist"},
        {5, "Dr. Wilson", "Pediatrician"},
        {6, "Dr. Davis", "Oncologist"},
        {7, "Dr. Martinez", "Psychiatrist"},
        {8, "Dr. Hernandez", "Gastroenterologist"},
        {9, "Dr. Lopez", "Pulmonologist"},
        {10, "Dr. Gonzalez", "Ophthalmologist"}
    };
    int choice;
    int patientCount = 0;
    int doctorCount = MaxDoctor;

    do {
        printf("\n\t\t\t#########################################################");
        printf("\n\t\t\t############                                #############");
        printf("\n\t\t\t############          Main menu             #############");
        printf("\n\t\t\t############                                #############");
        printf("\n\t\t\t#########################################################");
        printf("\n1. Add Patient");
        printf("\n2. Book Reservation");
        printf("\n3. Search Patient");
        printf("\n4. Show all patients");
        printf("\n5. Show all doctors");
        printf("\n6. Exit");
        printf("\nEnter your choice: "); 
        scanf("%d", &choice); 

        switch (choice) {
            case 1:
                patientCount = addPatient(patients, patientCount);
                break;
            case 2:
                BookReservation(patients, patientCount, doctors, doctorCount);
                break;
            case 3:
                searchPatient(patients, patientCount);
                break;
            case 4:
                showPatient(patients, patientCount);
                break;
            case 5:
                showDoctors(doctors, doctorCount);
                break;
            case 6:
                printf("Exitting.......\n");
        }
    } while (choice != 6);
    return 0;
}

               
               
               
               
               
               
               
                /**************************************** ADD PATIENT ************************************************/
int addPatient(struct patient patients[], int patientCount) {
    if (patientCount >= MaxPatient) {
        printf("Database limit exceeded! Cannot add more patients.\n");
    } else {
        printf("Enter your name: ");
        scanf("%49s", patients[patientCount].name);  // Use %49s to prevent buffer overflow

        printf("Enter your age: ");
        scanf("%d", &patients[patientCount].age);

        printf("Enter your gender (M/F): ");
        scanf(" %c", &patients[patientCount].gender); // Add a space before %c to consume any newline left in the buffer

        printf("Enter your address: ");
        scanf(" %49[^\n]", patients[patientCount].address);  // Use %49[^\n] to read entire line

        printf("Enter your contact number: ");
        scanf("%14s", patients[patientCount].contact);  // Use %14s to prevent buffer overflow

        printf("Enter your medical history: ");
        scanf(" %99[^\n]", patients[patientCount].medicalhistory);  // Use %99[^\n] to read entire line

        patients[patientCount].id = patientCount + 200;
        printf("Patient added successfully with ID %d\n", patients[patientCount].id);

        patientCount++;
    }
    return patientCount; // Return the updated patient count
}

                 
                 
                 
                 
                 
                 
        
        /**************************************** BOOK RESERVATION ****************************************/
void BookReservation(struct patient patients[], int patientCount, struct doctor doctors[], int doctorCount) {
    int patientId, doctorId;

    printf("Enter patient ID for reservation: ");
    scanf("%d", &patientId);

    int patientIndex = -1;
    for (int i = 0; i < patientCount; i++) {
        if (patients[i].id == patientId) {
            patientIndex = i;
            break;
        }
    }

    if (patientIndex == -1) {
        printf("Patient with ID %d not found.\n", patientId);
        return;
    }

    printf("Available doctors:\n");
    for (int i = 0; i < doctorCount; i++) {
        printf("Doctor ID: %d\n", doctors[i].id);
        printf("Name: %s\n", doctors[i].name);
        printf("Specialty: %s\n", doctors[i].specialty);
        printf("---------------------------------\n");
    }

    printf("Enter doctor ID to book: ");
    scanf("%d", &doctorId);

    int doctorIndex = -1;
    for (int i = 0; i < doctorCount; i++) {
        if (doctors[i].id == doctorId) {
            doctorIndex = i;
            break;
        }
    }

    if (doctorIndex == -1) {
        printf("Doctor with ID %d not found.\n", doctorId);
        return;
    }

    printf("Reservation successful for patient %s with doctor %s.\n",
           patients[patientIndex].name, doctors[doctorIndex].name);
}

                 
                 
                 
                 
                 
                 /**************************************** SEARCH PATIENT ****************************************/
void searchPatient(struct patient patients[], int patientCount) {
    int id;
    printf("Enter patient ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < patientCount; i++) {
        if (patients[i].id == id) {
            printf("Patient found:\n");
            printf("ID: %d\n", patients[i].id);
            printf("Name: %s\n", patients[i].name);
            printf("Age: %d\n", patients[i].age);
            printf("Gender: %c\n", patients[i].gender);
            printf("Address: %s\n", patients[i].address);
            printf("Contact: %s\n", patients[i].contact);
            printf("Medical History: %s\n", patients[i].medicalhistory);
            return;
        }
    }
    printf("Patient with ID %d not found.\n", id);
}

              
              
              
              
              
             
             
             
              /**************************************** SHOW ALL PATIENTS ****************************************/
void showPatient(struct patient patients[], int patientCount) {
    if (patientCount == 0) {
        printf("No patients in the database.\n");
        return;
    }

    for (int i = 0; i < patientCount; i++) {
        printf("ID: %d\n", patients[i].id);
        printf("Name: %s\n", patients[i].name);
        printf("Age: %d\n", patients[i].age);
        printf("Gender: %c\n", patients[i].gender);
        printf("Address: %s\n", patients[i].address);
        printf("Contact: %s\n", patients[i].contact);
        printf("Medical History: %s\n", patients[i].medicalhistory);
        printf("---------------------------------\n");
    }
}

               
               
               
               
               /**************************************** SHOW ALL DOCTORS ****************************************/
void showDoctors(struct doctor doctors[], int doctorCount) {
    if (doctorCount == 0) {
        printf("No doctors in the database.\n");
        return;
    }

    for (int i = 0; i < doctorCount; i++) {
        printf("Doctor ID: %d\n", doctors[i].id);
        printf("Name: %s\n", doctors[i].name);
        printf("Specialty: %s\n", doctors[i].specialty);
        printf("---------------------------------\n");
    }
}

