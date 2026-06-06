#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find GCD
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;

    // Find LCM
    lcm = (a * b) / gcd;

    printf("LCM = %d\n", lcm);

    return 0;
}