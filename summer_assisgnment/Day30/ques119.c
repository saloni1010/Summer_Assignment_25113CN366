// WAP to Create Mini Employee Management System

#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n, i, choice, searchId;
    int found = 0;

    // Input number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Department: ");
        scanf(" %[^\n]", emp[i].department);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Update Salary\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n--- Employee Records ---\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee ID : %d\n", emp[i].id);
                    printf("Name        : %s\n", emp[i].name);
                    printf("Department  : %s\n", emp[i].department);
                    printf("Salary      : %.2f\n", emp[i].salary);
                }

                break;

            case 2:
                found = 0;

                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == searchId)
                    {
                        found = 1;

                        printf("\nEmployee Found\n");
                        printf("Employee ID : %d\n", emp[i].id);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Department  : %s\n", emp[i].department);
                        printf("Salary      : %.2f\n", emp[i].salary);

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee not found.\n");
                }

                break;

            case 3:
                found = 0;

                printf("Enter Employee ID to update salary: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == searchId)
                    {
                        found = 1;

                        printf("Enter New Salary: ");
                        scanf("%f", &emp[i].salary);

                        printf("Salary updated successfully.\n");

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee not found.\n");
                }

                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}