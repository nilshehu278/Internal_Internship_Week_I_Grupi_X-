#include <stdio.h>

int main() {
    int start, end;

    int countDiv3 = 0, sumDiv3 = 0;
    int countDiv5Not3 = 0, sumDiv5Not3 = 0;

    // Marrja e input-it
    printf("Shkruaj fillimin e intervalit: ");
    scanf("%d", &start);

    printf("Shkruaj fundin e intervalit: ");
    scanf("%d", &end);

    // Validimi
    if (start > end) {
        printf("Gabim: Fillimi duhet te jete me i vogel ose i barabarte me fundin.\n");
        return 1;
    }

    // Loop për analizë
    for (int i = start; i <= end; i++) {

        // Numrat që pjesëtohen me 3
        if (i % 3 == 0) {
            countDiv3++;
            sumDiv3 += i;
        }
        // Numrat që pjesëtohen me 5 POR JO me 3
        else if (i % 5 == 0) {
            countDiv5Not3++;
            sumDiv5Not3 += i;
        }
    }

    // Output
    printf("\n--- Rezultati ---\n");
    printf("Intervali: %d deri %d\n", start, end);

    printf("\nPjesetohen me 3:\n");
    printf("Numeri: %d\n", countDiv3);
    printf("Shuma: %d\n", sumDiv3);

    printf("\nPjesetohen me 5 (jo me 3):\n");
    printf("Numeri: %d\n", countDiv5Not3);
    printf("Shuma: %d\n", sumDiv5Not3);

    // Krahasimi i shumave
    if (sumDiv3 > sumDiv5Not3) {
        printf("\nShuma e numrave qe pjesetohen me 3 eshte me e madhe.\n");
    } else if (sumDiv5Not3 > sumDiv3) {
        printf("\nShuma e numrave qe pjesetohen me 5 (jo me 3) eshte me e madhe.\n");
    } else {
        printf("\nTe dy shumat jane te barabarta.\n");
    }

    return 0;
}
