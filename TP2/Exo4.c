#include<stdio.h>
#include<math.h>

float make_change(float price, float amount, float *p_2e, int *p_1e, int *p_50c, int *p_20c,int *p_10c,int p_5c,int *p_2c, int *p_1c){
    float res = amount - price;
    int change = round(res * 100); /*Convertir en entier pour le modulo*/
    *p_2e = change / 200;
    change %= 200;
    //Piece de 1€
    *p_1e = change / 100;
    change %= 100;
    //Piece de 50cen
    *p_50c = change / 50
    change %= 50;
    //Piece de 20c
    *p_20c = change / 20;
    change %= 20;
    //Piece de 10c
    *p_10c = change / 10;
    change %= 10;
    //Piece de 5c
    *p_5c = change / 5;
    change %= 5;
    //Piece de 2c
    *p_2c = change / 2;
    change %= 2;
    //Piece de 1c
    *p_1c = change;

    return change;


}


int main(){
    float paye,recu,rendu;
    printf("Indiquez lz prix à payer \n");
    scanf("%f",&paye);
    printf("Indiquez le montant reçu \n");
    scanf("%f",&recu);
    printf(" Vous devez rendez\n");

    
}