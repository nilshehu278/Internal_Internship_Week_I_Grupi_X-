#include <stdio.h>

int main() {
    int age;
    char grade;
    float height;
    double salary;
    short year;
    long population;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    printf("Enter your year: ");
    scanf("%hd", &year);

    printf("Enter population: ");
    scanf("%ld", &population);

    printf("\n--- Student Data ---\n");
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Height: %.2f\n", height);
    printf("Salary: %.2lf\n", salary);
    printf("Year: %hd\n", year);
    printf("Population: %ld\n", population);

    return 0;
}