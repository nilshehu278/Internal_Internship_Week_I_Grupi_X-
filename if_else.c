#include <stdio.h>

int main() {
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("Excellent\n");
    } else if (score >= 70) {
        printf("Good\n");
    } else if (score >= 50) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}