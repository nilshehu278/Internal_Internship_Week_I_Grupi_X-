#include <stdio.h>

int main() {
    int number;
    float amount;

    int oldNumber;
    float oldAmount;

    int *pNumber;
    float *pAmount;

    printf("Enter an integer value: ");
    scanf("%d", &number);

    printf("Enter a float value: ");
    scanf("%f", &amount);

    oldNumber = number;
    oldAmount = amount;

    pNumber = &number;
    pAmount = &amount;

    printf("\n--- Before Change ---\n");
    printf("Direct integer value: %d\n", number);
    printf("Integer address: %p\n", (void*)pNumber);
    printf("Integer value through pointer: %d\n", *pNumber);

    printf("\nDirect float value: %.2f\n", amount);
    printf("Float address: %p\n", (void*)pAmount);
    printf("Float value through pointer: %.2f\n", *pAmount);

    *pNumber = *pNumber + 10;
    *pAmount = *pAmount * 2;

    printf("\n--- After Change ---\n");
    printf("Integer before change: %d\n", oldNumber);
    printf("Integer after change: %d\n", number);

    printf("Float before change: %.2f\n", oldAmount);
    printf("Float after change: %.2f\n", amount);

    printf("\n--- Final Evaluation for Integer ---\n");
    if (number > oldNumber) {
        printf("The integer value has increased.\n");
    } else if (number < oldNumber) {
        printf("The integer value has decreased.\n");
    } else {
        printf("The integer value stayed the same.\n");
    }

    printf("\n--- Final Evaluation for Float ---\n");
    if (amount > oldAmount) {
        printf("The float value has increased.\n");
    } else if (amount < oldAmount) {
        printf("The float value has decreased.\n");
    } else {
        printf("The float value stayed the same.\n");
    }

    printf("\n--- Interval Check for Integer ---\n");
    if (number >= 0 && number <= 100) {
        printf("The final integer is inside the interval 0 to 100.\n");
    } else {
        printf("The final integer is outside the interval 0 to 100.\n");
    }

    return 0;
}