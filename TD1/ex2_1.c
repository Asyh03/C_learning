/*
 * TD1 - Exercice 2.1 : Convertisseur francs → euros
 * 1 euro = 6.55957 francs
 */

#include <stdio.h>

int main() {
    float somme;  // float car la somme peut avoir des décimales

    // Lecture de la somme en francs
    printf("Entrez la somme en francs a convertir : ");
    scanf("%f", &somme);

    // Conversion : euros = francs / 6.55957
    float conversion = somme / 6.55957;

    // Affichage du résultat
    printf("Votre somme en euros est : %f\n", conversion);

    return 0;
}
