#include <stdio.h>

// Enum me 4 nivele
enum Level {
    BEGINNER = 1,
    INTERMEDIATE,
    ADVANCED,
    EXPERT
};

int main() {
    int choice;
    int validCount = 0, invalidCount = 0;

    printf("Zgjedh nivelin:\n");
    printf("1 - Beginner\n");
    printf("2 - Intermediate\n");
    printf("3 - Advanced\n");
    printf("4 - Expert\n");

    // Loop për 3 raste
    for (int i = 1; i <= 3; i++) {
        printf("\nZgjedhja %d: ", i);
        scanf("%d", &choice);

        enum Level level = choice;

        switch (level) {
            case BEGINNER:
                printf("Ti je ne nivel fillestar. Filloje me bazat.\n");
                validCount++;
                break;

            case INTERMEDIATE:
                printf("Ti ke njohuri mesatare. Praktiko me shume.\n");
                validCount++;
                break;

            case ADVANCED:
                printf("Ti je i avancuar. Mund te besh projekte.\n");
                validCount++;
                break;

            case EXPERT:
                printf("Ti je ekspert. Mund te ndihmosh te tjeret.\n");
                validCount++;
                break;

            default:
                printf("Zgjedhje e pavlefshme!\n");
                invalidCount++;
        }
    }

    // Statistikat
    printf("\n--- STATISTIKAT ---\n");
    printf("Zgjedhje valide: %d\n", validCount);
    printf("Zgjedhje te pavlefshme: %d\n", invalidCount);

    return 0;
}
