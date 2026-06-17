#include<stdio.h>

int main(){
    int value;
    int count = 0;
    int somme = 0;
    while(scanf("%d",&value) != EOF){
        somme += value;
        count += 1;
    }
    float moyenne = somme/count;
    printf("Moyenne : %f",moyenne);
    return 0;
}