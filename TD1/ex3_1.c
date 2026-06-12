/*
 * TD1 - Exercice 3.1 : Pair ou impair
 * Un nombre est pair si le reste de sa division par 2 est 0
 */

#include <stdio.h>

int main() {
    int x;

    printf("Entrez un nombre entier : ");
    scanf("%d", &x);

    // x % 2 donne le reste de la division de x par 2
    // Si reste == 0 → pair, sinon → impair
    if (x % 2 == 0) {
        printf("%d est pair\n", x);
    } else {
        printf("%d est impair\n", x);
    }

    return 0;
}
