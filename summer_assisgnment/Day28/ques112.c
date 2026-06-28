// WAP to Create Contact Management System in C

#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact c[100];
    int n, i, choice, searchFound = 0;
    char searchName[50];

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    // Input contact details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter Details of Contact %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", c[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", c[i].phone);

        printf("Enter Email: ");
        scanf("%s", c[i].email);
    }

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Display All Contacts\n");
        printf("2. Search Contact by Name\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n===== CONTACT LIST =====\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nContact %d\n", i + 1);
                    printf("Name  : %s\n", c[i].name);
                    printf("Phone : %s\n", c[i].phone);
                    printf("Email : %s\n", c[i].email);
                }
                break;

            case 2:
                printf("Enter name to search: ");
                scanf(" %[^\n]", searchName);

                searchFound = 0;

                for(i = 0; i < n; i++)
                {
                    if(strcmp(c[i].name, searchName) == 0)
                    {
                        printf("\nContact Found\n");
                        printf("Name  : %s\n", c[i].name);
                        printf("Phone : %s\n", c[i].phone);
                        printf("Email : %s\n", c[i].email);

                        searchFound = 1;
                        break;
                    }
                }

                if(searchFound == 0)
                {
                    printf("Contact not found.\n");
                }
                break;

            case 3:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 3);

    return 0;
}