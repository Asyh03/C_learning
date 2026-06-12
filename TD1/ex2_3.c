/*
 * TD1 - Exercice 2.3 : Calcul du salaire net
 *
 * Formules :
 *   salaire net = brut - valeur_impot - valeur_cnss
 *   brut = (salaire_base + prime_technicite + prime_transport + prime_enfants) * taux_travail
 *   taux_travail = jours_travailles / 26
 *   prime_enfants = prime_un_enfant * nb_enfants
 *   valeur_impot = 3.5% * brut
 *   valeur_cnss  = 17.5% * brut
 */

#include <stdio.h>

int main() {
    float salaire_base, prime_technicite, prime_transport, prime_un_enfant;
    int nb_enfants, jours_travailles;  // entiers car pas de décimales

    // Lecture des données
    printf("Salaire de base : ");       scanf("%f", &salaire_base);
    printf("Prime technicite : ");      scanf("%f", &prime_technicite);
    printf("Prime transport : ");       scanf("%f", &prime_transport);
    printf("Prime par enfant : ");      scanf("%f", &prime_un_enfant);
    printf("Nombre d'enfants : ");      scanf("%d", &nb_enfants);
    printf("Jours travailles : ");      scanf("%d", &jours_travailles);

    // Calculs étape par étape
    float taux_cnss   = 17.5 / 100.0;          // 17.5%
    float taux_impot  = 3.5  / 100.0;          // 3.5%
    float taux_travail = jours_travailles / 26.0; // /26.0 pour éviter division entière
    float prime_enfants = prime_un_enfant * nb_enfants;
    float brut = (salaire_base + prime_technicite + prime_transport + prime_enfants) * taux_travail;
    float valeur_impot = taux_impot * brut;
    float valeur_cnss  = taux_cnss  * brut;

    // Calcul final
    float salaire_net = brut - valeur_impot - valeur_cnss;

    printf("Salaire net : %f\n", salaire_net);

    return 0;
}
