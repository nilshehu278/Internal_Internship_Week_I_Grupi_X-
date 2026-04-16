#include <stdio.h>

int main() {
    int start, end;

    int countDiv3 = 0, sumDiv3 = 0;
    int countDiv5 = 0, sumDiv5 = 0;

    // Input
    printf("Enter start value: ");
    scanf("%d", &start);

    printf("Enter end value: ");
    scanf("%d", &end);

    // Kontroll i intervalit
    if (start > end) {
        printf("Invalid interval!\n");
        return 0;
    }

    // Loop
    for (int i = start; i <= end; i++) {

        // Kategoria 1: pjesëtohet me 3
        if (i % 3 == 0) {
            countDiv3++;
            sumDiv3 += i;
        }

        // Kategoria 2: pjesëtohet me 5 POR JO me 3
        else if (i % 5 == 0) {
            countDiv5++;
            sumDiv5 += i;
        }
    }

    // Output
    printf("\n--- Results ---\n");
    printf("Interval: %d to %d\n", start, end);

    printf("\nDivisible by 3:\n");
    printf("Count: %d\n", countDiv3);
    printf("Sum: %d\n", sumDiv3);

    printf("\nDivisible by 5 (but not 3):\n");
    printf("Count: %d\n", countDiv5);
    printf("Sum: %d\n", sumDiv5);

    // Krahasimi i shumave
    printf("\n--- Comparison ---\n");

    if (sumDiv3 > sumDiv5) {
        printf("Sum of numbers divisible by 3 is greater\n");
    } else if (sumDiv5 > sumDiv3) {
        printf("Sum of numbers divisible by 5 is greater\n");
    } else {
        printf("Both sums are equal\n");
    }

    return 0;
}