#include<stdio.h>
#include<math.h>

int main(){
    int somme,n;
    printf("Entrez votre nombre : ");
    scanf("%d",&n);
    
    for (int j=1;j<=n;j++){
        somme = 0;


        for (int i = 1; i< j;i ++){
            if(j %i == 0){
                somme += i;
            }
        }
        if (somme == j){
            printf("%d\n",j);
        }

    }
    return 0;


}