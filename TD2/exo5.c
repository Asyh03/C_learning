#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int count,nc,n; //Nombre de coup
    srand(time(NULL));
    int value = rand()%101;
    printf("Entrez le nombre de coups :");
    scanf("%d",&nc);

    while(count < nc){
        printf("Entrez votre nombre : ");
        scanf("%d",&n);
        count += 1;
        if(n < value ) {
            printf("Trop petit");
        }
        else if(n > value){
            printf("Trop grand");
        }
        else{
            printf("Trouvé !");
            break;
        }
        

    }
    if ((count == nc) && (value != n)){
        printf("Perdu !");
    }
    

    return 0;


}