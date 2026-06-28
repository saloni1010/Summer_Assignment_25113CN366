// WAP to Create Ticket Booking System in C

#include <stdio.h>

int main()
{
    int totalSeats = 10;
    int bookedSeats = 0;
    int choice, seats;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of seats to book: ");
                scanf("%d", &seats);

                if(seats <= 0)
                {
                    printf("Invalid number of seats.\n");
                }
                else if(bookedSeats + seats > totalSeats)
                {
                    printf("Not enough seats available.\n");
                }
                else
                {
                    bookedSeats += seats;
                    printf("%d seat(s) booked successfully.\n", seats);
                }
                break;

            case 2:
                printf("Available Seats: %d\n", totalSeats - bookedSeats);
                printf("Booked Seats    : %d\n", bookedSeats);
                break;

            case 3:
                printf("Enter number of seats to cancel: ");
                scanf("%d", &seats);

                if(seats <= 0 || seats > bookedSeats)
                {
                    printf("Invalid cancellation.\n");
                }
                else
                {
                    bookedSeats -= seats;
                    printf("%d seat(s) cancelled successfully.\n", seats);
                }
                break;

            case 4:
                printf("Thank You for Using Ticket Booking System.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}