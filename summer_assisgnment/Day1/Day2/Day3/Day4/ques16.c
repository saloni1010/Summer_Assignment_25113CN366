#include <stdio.h>

int main() {
    long long n;
    long long largestFactor = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    // Remove factors of 2
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }

    // Check odd factors
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }

    // If remaining n is a prime number > 2
    if (n > 2)
        largestFactor = n;

    printf("Largest Prime Factor = %lld\n", largestFactor);

    return 0;
}