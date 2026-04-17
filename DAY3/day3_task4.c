#include <stdio.h>

int main() {
    int a;
    float b;

    // Input
    printf("Shkruaj nje numer (int): ");
    scanf("%d", &a);

    printf("Shkruaj nje numer (float): ");
    scanf("%f", &b);

    // Pointerat
    int *pA = &a;
    float *pB = &b;

    // Ruaj vlerat fillestare
    int oldA = a;
    float oldB = b;

    // =========================
    // PARA NDRYSHIMIT
    // =========================
    printf("\n--- PARA NDRYSHIMIT ---\n");

    printf("a (direkt): %d\n", a);
    printf("Adresa e a: %p\n", (void*)&a);
    printf("a permes pointer-it: %d\n", *pA);

    printf("\nb (direkt): %.2f\n", b);
    printf("Adresa e b: %p\n", (void*)&b);
    printf("b permes pointer-it: %.2f\n", *pB);

    // =========================
    // NDRYSHIMI ME POINTER
    // =========================
    *pA = *pA + 10;     // rrit int
    *pB = *pB * 2;      // dyfishon float

    // =========================
    // PAS NDRYSHIMIT
    // =========================
    printf("\n--- PAS NDRYSHIMIT ---\n");

    printf("a (i ri): %d\n", a);
    printf("b (i ri): %.2f\n", b);

    // =========================
    // ANALIZA
    // =========================
    printf("\n--- ANALIZA ---\n");

    // për a
    if (a > oldA) {
        printf("a eshte rritur.\n");
    } else if (a < oldA) {
        printf("a eshte zvogeluar.\n");
    } else {
        printf("a ka mbetur e njejte.\n");
    }

    // për b
    if (b > oldB) {
        printf("b eshte rritur.\n");
    } else if (b < oldB) {
        printf("b eshte zvogeluar.\n");
    } else {
        printf("b ka mbetur e njejte.\n");
    }

    // kontroll intervali për a
    if (a >= 0 && a <= 50) {
        printf("a eshte ne intervalin [0, 50].\n");
    } else {
        printf("a eshte jashte intervalit [0, 50].\n");
    }

    return 0;
}
