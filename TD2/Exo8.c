#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int n,rayon,hauteur,p;
    srand(time(NULL));
    
    
    printf("Entrez votre nombre : \n");
    scanf("%d",&n);
    printf("Entrez le rayon : \n");
    scanf("%d",&rayon);
    printf("Entrez la hauteur : \n");
    scanf("%d",&hauteur);
    printf("Entrez la probabilité : \n");
    scanf("%d",&p);
    int espaces = n-1-rayon;
    for(int i = 0;i<n;i++){
      for(int j=0;j<n-i-1;j++){
        printf(" ");
      }
      for(int j=0;j<2*i+1;j++){
        if(p > rand()%101 ){
            printf("o");
        } else{
            printf("^");
        }
        
      }
        
        printf("\n");
    }

    for(int k=0;k<hauteur;k++ ){
        for(int j = 0;j<espaces;j++){
            printf(" ");
        }
        for(int l=0;l<2*rayon+1;l++){
            printf("+");
        }

        printf("\n");
    }

    return 0;
    
}