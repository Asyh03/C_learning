/*
 * TD1 - Exercice 4 : Signe du produit de 2 entiers sans le calculer
 *
 * Règles des signes :
 *   (+) x (+) = Positif
 *   (-) x (-) = Positif
 *   (+) x (-) = Négatif
 *   (-) x (+) = Négatif
 *    0  x  n  = Nul
 */

#include <stdio.h>

int main() {
    int a, b;

    printf("Entrez vos nombres :\n");
    printf("a : "); scanf("%d", &a);
    printf("b : "); scanf("%d", &b);

    // On vérifie d'abord le cas zéro (cas limite)
    if (a == 0 || b == 0) {
        printf("Le produit est nul\n");
    }
    // Même signe → positif
    else if ((a < 0 && b < 0) || (a > 0 && b > 0)) {
        printf("Le produit est positif\n");
    }
    // Signes différents → négatif
    else {
        printf("Le produit est negatif\n");
    }

    return 0;
}
