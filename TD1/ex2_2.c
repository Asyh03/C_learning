/*
 * TD1 - Exercice 2.2 : Moyenne de 4 entiers
 */

#include <stdio.h>

int main() {
    int a, b, c, d;  // Les 4 entiers à lire

    // Lecture des 4 entiers un par un
    printf("Entrez vos nombres :\n");
    printf("a : "); scanf("%d", &a);
    printf("b : "); scanf("%d", &b);
    printf("c : "); scanf("%d", &c);
    printf("d : "); scanf("%d", &d);

    // Division par 4.0 (float) pour éviter la division entière
    // Sans le .0, le résultat serait tronqué (ex: 7.5 → 7)
    float moyenne = (a + b + c + d) / 4.0;

    printf("Leur moyenne est : %f\n", moyenne);

    return 0;
}
