#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    // Convert lowercase to uppercase
    for(i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Uppercase string = %s\n", str);

    return 0;
}