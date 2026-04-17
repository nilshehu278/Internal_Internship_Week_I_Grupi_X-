#include <stdio.h>

// Krijimi i enum
enum Level {
    BEGINNER = 1,
    INTERMEDIATE,
    ADVANCED,
    EXPERT
};

int main() {
    int choice;
    int validCount = 0, invalidCount = 0;

    printf("Student Level Selection Program\n");

    // Loop për 3 raste testimi
    for (int i = 1; i <= 3; i++) {

        printf("\nTest %d\n", i);
        printf("Choose level (1-4): ");
        scanf("%d", &choice);

        // Kontroll input dhe lidhje me enum
        enum Level level = choice;

        switch(level) {
            case BEGINNER:
                printf("Level: Beginner - Needs basic practice\n");
                validCount++;
                break;

            case INTERMEDIATE:
                printf("Level: Intermediate - Ready to improve\n");
                validCount++;
                break;

            case ADVANCED:
                printf("Level: Advanced - Strong skills\n");
                validCount++;
                break;

            case EXPERT:
                printf("Level: Expert - Ready for challenges\n");
                validCount++;
                break;

            default:
                printf("Invalid choice!\n");
                invalidCount++;
        }
    }

    // Statistikat finale
    printf("\n--- Statistics ---\n");
    printf("Valid selections: %d\n", validCount);
    printf("Invalid selections: %d\n", invalidCount);

    return 0;
}