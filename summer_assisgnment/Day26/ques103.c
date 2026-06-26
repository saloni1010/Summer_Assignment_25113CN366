#include <stdio.h>

int main() {
    int choice, pin = 1234, enteredPin;
    float balance = 5000.0, amount;

    printf("===== ATM Simulation =====\n");

    // PIN Verification
    printf("Enter ATM PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN! Access Denied.\n");
        return 0;
    }

    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                balance += amount;
                printf("Amount Deposited Successfully!\n");
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if (amount > balance) {
                    printf("Insufficient Balance!\n");
                } else {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                }
                break;

            case 4:
                printf("Thank you for using ATM!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}