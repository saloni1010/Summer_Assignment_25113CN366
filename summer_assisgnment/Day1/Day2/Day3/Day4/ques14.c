#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Fibonacci term = 0\n");
    }
    else if (n == 1) {
        printf("Fibonacci term = 1\n");
    }
    else {
        for (i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }

        printf("Fibonacci term = %d\n", second);
    }

    return 0;
}