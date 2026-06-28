// WAP to Create Library Management System in C

#include <stdio.h>
#include <string.h>

struct Library
{
    int id;
    char name[50];
    char author[50];
    float price;
};

int main()
{
    struct Library book[100];
    int n, i, searchId, found = 0;

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &book[i].id);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", book[i].name);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", book[i].author);

        printf("Enter Price: ");
        scanf("%f", &book[i].price);
    }

    // Display book details
    printf("\n===== Library Records =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d Details\n", i + 1);
        printf("Book ID   : %d\n", book[i].id);
        printf("Book Name : %s\n", book[i].name);
        printf("Author    : %s\n", book[i].author);
        printf("Price     : %.2f\n", book[i].price);
    }

    // Search book by ID
    printf("\nEnter Book ID to Search: ");
    scanf("%d", &searchId);

    for(i = 0; i < n; i++)
    {
        if(book[i].id == searchId)
        {
            found = 1;

            printf("\nBook Found\n");
            printf("Book ID   : %d\n", book[i].id);
            printf("Book Name : %s\n", book[i].name);
            printf("Author    : %s\n", book[i].author);
            printf("Price     : %.2f\n", book[i].price);

            break;
        }
    }

    if(found == 0)
    {
        printf("\nBook not found.\n");
    }

    return 0;
}