// WAP to Create Marksheet Generation System in C

#include <stdio.h>

int main() {
    char name[50];
    int rollNo;
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;
    char grade;

    // Input Student Details
    printf("===== Marksheet Generation System =====\n");

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    // Input Marks
    printf("Enter Marks of Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &sub3);

    printf("Enter Marks of Subject 4: ");
    scanf("%f", &sub4);

    printf("Enter Marks of Subject 5: ");
    scanf("%f", &sub5);

    // Calculate Total and Percentage
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5;

    // Grade Calculation
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    // Display Marksheet
    printf("\n========== STUDENT MARKSHEET ==========\n");

    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", rollNo);

    printf("\nMarks Obtained\n");
    printf("Subject 1 : %.2f\n", sub1);
    printf("Subject 2 : %.2f\n", sub2);
    printf("Subject 3 : %.2f\n", sub3);
    printf("Subject 4 : %.2f\n", sub4);
    printf("Subject 5 : %.2f\n", sub5);

    printf("\nTotal Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("Grade       : %c\n", grade);

    if (grade == 'F')
        printf("Result      : Fail\n");
    else
        printf("Result      : Pass\n");

    return 0;
}