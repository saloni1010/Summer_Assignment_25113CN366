// WAP to Create Mini Library Management System

#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    int quantity;
};

int main()
{
    struct Book b[100];
    int n, i, choice, searchId;
    int found;

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", b[i].name);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", b[i].author);

        printf("Enter Quantity: ");
        scanf("%d", &b[i].quantity);
    }

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Display All Books\n");
        printf("2. Search Book by ID\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n--- Book Records ---\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nBook ID   : %d\n", b[i].id);
                    printf("Book Name : %s\n", b[i].name);
                    printf("Author    : %s\n", b[i].author);
                    printf("Quantity  : %d\n", b[i].quantity);
                }
                break;

            case 2:
                found = 0;

                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == searchId)
                    {
                        found = 1;

                        printf("\nBook Found\n");
                        printf("Book ID   : %d\n", b[i].id);
                        printf("Book Name : %s\n", b[i].name);
                        printf("Author    : %s\n", b[i].author);
                        printf("Quantity  : %d\n", b[i].quantity);

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
                }

                break;

            case 3:
                printf("Enter Book ID to issue: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == searchId)
                    {
                        found = 1;

                        if(b[i].quantity > 0)
                        {
                            b[i].quantity--;
                            printf("Book issued successfully.\n");
                        }
                        else
                        {
                            printf("Book not available.\n");
                        }

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
                }

                break;

            case 4:
                printf("Enter Book ID to return: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == searchId)
                    {
                        found = 1;

                        b[i].quantity++;
                        printf("Book returned successfully.\n");

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
                }

                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 5);

    return 0;
}