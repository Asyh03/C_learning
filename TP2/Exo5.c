#include<stdio.h>

void print_base(unsigned int n, unsigned int b){
    if( n== 0){
        printf("%d : ",b);
        return;
    }
    //printf("Du poids fort au poids faible\n");
    
    print_base(n/b,b); //j'affiche d'abord et quadn j'arrive à la fin je 
    printf("%d",n%b);
    
    
    
    
    //printf("Du poids faible au poids fort\n");
    /*print_base(n/b,b);
    printf("%d",n%b);*/
    
}
int main(){
    int n,b;
    printf("Entrez un nombre n : ");
    scanf("%d",&n);
    printf("Entrez la base b : ");
    scanf("%d",&b);
    //printf("%d = %d : ",n,b);
    
    print_base(n,b);//affichage dans la base b
    printf("\n");

    return 0;
}