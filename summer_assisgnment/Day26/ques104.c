#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== Quiz Application =====\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong Answer!\n");
    }

    // Question 2
    printf("\n2. Which language is used for C programming?\n");
    printf("1. High-level\n2. Machine-level\n3. Middle-level\n4. Assembly\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong Answer!\n");
    }

    // Question 3
    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong Answer!\n");
    }

    // Final Score
    printf("\n===== Result =====\n");
    printf("Your Score: %d/3\n", score);

    return 0;
}