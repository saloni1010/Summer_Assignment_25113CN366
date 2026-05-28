#include <stdio.h>
int main() {

    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; ++i) {
        sum += i;
    }

    printf("Sum of first N Natural Numbers = %d", sum);
    
    return 0;
}