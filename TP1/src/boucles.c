#include <stdio.h>

int main(void) {
    int compteur = 5; // Valeur strictement inférieure à 10

    printf("--- Version avec boucles FOR ---\n");
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // Première ligne, dernière ligne, première colonne ou dernière colonne de la ligne
            if (i == 1 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    printf("\n--- Version avec boucle WHILE ---\n");
    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (i == 1 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}