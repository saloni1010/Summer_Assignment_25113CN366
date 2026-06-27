// WAP to Create Employee Management System in C

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i, searchId;
    float totalSalary = 0, averageSalary;

    while (1) {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Calculate Average Salary\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Salary: ");
                scanf("%f", &emp[n].salary);

                n++;
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("\nNo employee records found!\n");
                } else {
                    printf("\n--- Employee Records ---\n");

                    for (i = 0; i < n; i++) {
                        printf("Employee ID : %d\n", emp[i].id);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Salary      : %.2f\n", emp[i].salary);
                        printf("---------------------------\n");
                    }
                }
                break;

            case 3:
                printf("\nEnter Employee ID to Search: ");
                scanf("%d", &searchId);

                for (i = 0; i < n; i++) {
                    if (emp[i].id == searchId) {
                        printf("\nEmployee Found!\n");
                        printf("Employee ID : %d\n", emp[i].id);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Salary      : %.2f\n", emp[i].salary);
                        break;
                    }
                }

                if (i == n) {
                    printf("Employee Not Found!\n");
                }
                break;

            case 4:
                if (n == 0) {
                    printf("\nNo employee records available!\n");
                } else {
                    totalSalary = 0;

                    for (i = 0; i < n; i++) {
                        totalSalary += emp[i].salary;
                    }

                    averageSalary = totalSalary / n;

                    printf("\nAverage Salary = %.2f\n", averageSalary);
                }
                break;

            case 5:
                printf("\nExiting Program...\n");
                return 0;

            default:
                printf("\nInvalid Choice! Please try again.\n");
        }
    }

    return 0;
}