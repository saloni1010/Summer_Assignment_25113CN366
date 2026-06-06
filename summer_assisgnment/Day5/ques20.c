#include <stdio.h>

int main() {
    long long n;
    long long largest = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    // Remove factors of 2
    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    // Check odd factors
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    // Remaining number is prime
    if (n > 2)
        largest = n;

    printf("Largest Prime Factor = %lld\n", largest);

    return 0;
}