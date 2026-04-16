#include <stdio.h>

int main() {
    int a;
    float b;

    // Input
    printf("Shkruaj nje numer (int): ");
    scanf("%d", &a);

    printf("Shkruaj nje numer (float): ");
    scanf("%f", &b);

    // Pointera
    int *pA = &a;
    float *pB = &b;

    // Shfaqje fillestare
    printf("\n--- Para ndryshimit ---\n");
    printf("Vlera e a: %d\n", a);
    printf("Adresa e a: %p\n", &a);
    printf("Vlera e a permes pointer-it: %d\n", *pA);

    printf("\nVlera e b: %.2f\n", b);
    printf("Adresa e b: %p\n", &b);
    printf("Vlera e b permes pointer-it: %.2f\n", *pB);

    // Ruaj vleren fillestare
    int oldA = a;

    // Ndryshim përmes pointer-it
    *pA = *pA + 10;

    printf("\n--- Pas ndryshimit ---\n");
    printf("Vlera e re e a: %d\n", a);

    // Kontroll me if/else
    printf("\n--- Analiza ---\n");
    if (a > oldA) {
        printf("Vlera eshte rritur.\n");
    } else if (a < oldA) {
        printf("Vlera eshte zvogeluar.\n");
    } else {
        printf("Vlera ka mbetur e njejte.\n");
    }

    // Kontroll intervali
    if (a >= 0 && a <= 50) {
        printf("Vlera perfundimtare eshte ne intervalin [0, 50].\n");
    } else {
        printf("Vlera perfundimtare eshte jashte intervalit [0, 50].\n");
    }

    return 0;
}
