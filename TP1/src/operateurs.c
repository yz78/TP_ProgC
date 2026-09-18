#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a = 16;
    int b = 3;

    // 1. Addition
    printf("a + b = %d\n", a + b);

    // 2. Soustraction
    printf("a - b = %d\n", a - b);

    // 3. Multiplication
    printf("a * b = %d\n", a * b);

    // 4. Division entière
    printf("a / b = %d\n", a / b);

    // 5. Modulo (reste de la division)
    printf("a %% b = %d\n", a % b);

    // 6. Egalité (a == b)
    printf("a == b : %s\n", (a == b) ? "true" : "false");

    // 7. Supériorité (a > b)
    printf("a > b : %s\n", (a > b) ? "true" : "false");

    return 0;
}

