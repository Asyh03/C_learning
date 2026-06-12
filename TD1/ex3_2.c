/*
 * TD1 - Exercice 3.2 : Ordonner deux entiers tels que a >= b
 * On utilise une variable temporaire pour échanger les valeurs
 */

#include <stdio.h>

int main() {
    int a, b;

    printf("Entrez vos nombres :\n");
    printf("a : "); scanf("%d", &a);
    printf("b : "); scanf("%d", &b);

    // Si a < b, on échange les valeurs grâce à une variable temporaire
    // Sans tmp, on perdrait une des valeurs pendant l'échange
    if (a < b) {
        int tmp = a;  // on sauvegarde a
        a = b;        // a prend la valeur de b
        b = tmp;      // b prend l'ancienne valeur de a
    }

    // Ici a >= b dans tous les cas
    printf("a : %d, b : %d\n", a, b);

    return 0;
}
