#include <stdio.h>

int main() {

    int num, count = 0;
    
    printf("Enter any integer: ");
    scanf("%d", &num);
    int n = num;
    while (num!= 0) {

        num = num / 10;
        count ++; 

    }
    printf("Number of digits in %d = %d", n, count);


    return 0;


}