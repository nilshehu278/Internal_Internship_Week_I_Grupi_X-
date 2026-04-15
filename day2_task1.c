#include <stdio.h>

int main() {
    int age;
    char initial;
    float height;
    double average;
    short schoolYear = 12;
    long cityPopulation = 2100000;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your initial: ");
    scanf(" %c", &initial);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your average grade: ");
    scanf("%lf", &average);

    printf("\n----- User Profile -----\n");
    printf("Age: %d\n", age);
    printf("Initial: %c\n", initial);
    printf("Height: %.2f m\n", height);
    printf("Average Grade: %.2lf\n", average);
    printf("School Year: %hd\n", schoolYear);
    printf("City Population: %ld\n", cityPopulation);

    return 0;
}