// WAP to Create Student Record Management System in C

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, searchRoll;
    float total, average;

    while (1) {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Calculate Average Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student Record Added Successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("\nNo records found!\n");
                } else {
                    printf("\n--- Student Records ---\n");
                    for (i = 0; i < n; i++) {
                        printf("Roll No: %d\n", s[i].roll);
                        printf("Name    : %s\n", s[i].name);
                        printf("Marks   : %.2f\n", s[i].marks);
                        printf("----------------------\n");
                    }
                }
                break;

            case 3:
                printf("\nEnter Roll Number to Search: ");
                scanf("%d", &searchRoll);

                for (i = 0; i < n; i++) {
                    if (s[i].roll == searchRoll) {
                        printf("\nStudent Found!\n");
                        printf("Roll No: %d\n", s[i].roll);
                        printf("Name   : %s\n", s[i].name);
                        printf("Marks  : %.2f\n", s[i].marks);
                        break;
                    }
                }

                if (i == n) {
                    printf("Student Record Not Found!\n");
                }
                break;

            case 4:
                if (n == 0) {
                    printf("\nNo records available!\n");
                } else {
                    total = 0;

                    for (i = 0; i < n; i++) {
                        total += s[i].marks;
                    }

                    average = total / n;

                    printf("\nAverage Marks = %.2f\n", average);
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