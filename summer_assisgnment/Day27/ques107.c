// WAP to Create Salary Management System in C

#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i, searchId;

    while (1) {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary Record\n");
        printf("2. Display Salary Records\n");
        printf("3. Search Employee Salary\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].empId);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basicSalary);

                // Calculate HRA and DA
                emp[n].hra = emp[n].basicSalary * 0.20;
                emp[n].da = emp[n].basicSalary * 0.10;

                // Calculate Gross Salary
                emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

                printf("Salary Record Added Successfully!\n");
                n++;
                break;

            case 2:
                if (n == 0) {
                    printf("\nNo salary records found!\n");
                } else {
                    printf("\n--- Salary Records ---\n");

                    for (i = 0; i < n; i++) {
                        printf("\nEmployee ID   : %d\n", emp[i].empId);
                        printf("Name          : %s\n", emp[i].name);
                        printf("Basic Salary  : %.2f\n", emp[i].basicSalary);
                        printf("HRA (20%%)     : %.2f\n", emp[i].hra);
                        printf("DA (10%%)      : %.2f\n", emp[i].da);
                        printf("Gross Salary  : %.2f\n", emp[i].grossSalary);
                        printf("-----------------------------\n");
                    }
                }
                break;

            case 3:
                printf("\nEnter Employee ID to Search: ");
                scanf("%d", &searchId);

                for (i = 0; i < n; i++) {
                    if (emp[i].empId == searchId) {

                        printf("\nEmployee Salary Details\n");
                        printf("Employee ID   : %d\n", emp[i].empId);
                        printf("Name          : %s\n", emp[i].name);
                        printf("Basic Salary  : %.2f\n", emp[i].basicSalary);
                        printf("HRA           : %.2f\n", emp[i].hra);
                        printf("DA            : %.2f\n", emp[i].da);
                        printf("Gross Salary  : %.2f\n", emp[i].grossSalary);

                        break;
                    }
                }

                if (i == n) {
                    printf("Employee Record Not Found!\n");
                }
                break;

            case 4:
                printf("\nExiting Program...\n");
                return 0;

            default:
                printf("\nInvalid Choice! Try Again.\n");
        }
    }

    return 0;
}