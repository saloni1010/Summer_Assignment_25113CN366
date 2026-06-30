// WAP to Create Student Record System Using Arrays and Strings

#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i, searchRoll;
    int found = 0;

    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display all student records
    printf("\n--- Student Records ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Marks       : %.2f\n", s[i].marks);
    }

    // Search student by roll number
    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == searchRoll)
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
        printf("\nStudent record not found.\n");
    }

    return 0;
}