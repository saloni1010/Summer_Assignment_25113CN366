#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);

    // Print factors of 2
    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }

    // Print odd prime factors
    for (i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // If n is still greater than 2
    if (n > 2)
        printf("%d", n);

    return 0;
}