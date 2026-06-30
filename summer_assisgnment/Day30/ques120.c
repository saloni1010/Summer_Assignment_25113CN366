// Complete Mini Project Using Arrays, Strings and Functions
// Student Management System

#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

// Function to add student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;

    printf("Student record added successfully.\n");
}

// Function to display students
void displayStudents()
{
    int i;

    if(n == 0)
    {
        printf("\nNo student records found.\n");
        return;
    }

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Marks       : %.2f\n", s[i].marks);
    }
}

// Function to search student
void searchStudent()
{
    int roll, i, found = 0;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            found = 1;

            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", s[i].roll);
            printf("Name        : %s\n", s[i].name);
            printf("Marks       : %.2f\n", s[i].marks);

            break;
        }
    }

    if(found == 0)
    {
        printf("Student record not found.\n");
    }
}

// Function to update student marks
void updateMarks()
{
    int roll, i, found = 0;

    printf("\nEnter Roll Number to Update Marks: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            found = 1;

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("Marks updated successfully.\n");

            break;
        }
    }

    if(found == 0)
    {
        printf("Student record not found.\n");
    }
}

// Function to delete student
void deleteStudent()
{
    int roll, i, j, found = 0;

    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            found = 1;

            for(j = i; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            n--;

            printf("Student record deleted successfully.\n");

            break;
        }
    }

    if(found == 0)
    {
        printf("Student record not found.\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 6);

    return 0;
}