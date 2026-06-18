#include<stdio.h>

int main(){
    int value;
    printf("Entrez vos nombres (CTRL-D pour terminer) : \n");
    scanf("%d",&value);
    int min = value;
    int max = value;
    while(scanf("%d",&value) != EOF){
        if (value < min ) {
            min = value;

        }
        if (value > max){
            max = value;
        }
    }
    printf("Minimum : %d\n Maximum : %d\n",min,max);// ARRÊTER LA LECTURE AVEC CTRL D
    return 0;
}