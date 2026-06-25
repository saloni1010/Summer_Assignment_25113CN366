#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50], temp[50];
    int i, j;

    // Input names
    printf("Enter 5 names:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    // Sorting names alphabetically
    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Display sorted names
    printf("\nNames in alphabetical order:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}