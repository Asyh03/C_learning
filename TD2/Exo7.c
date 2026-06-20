#include<stdio.h>


int main(){
    int u0,l;
    printf("Entrez l : \n");
    scanf("%d",&l);
    int meilleur_a = 0;
    int meilleur_k = 0;
    
    

    for(int a = 2;a<=l;a++){
        int u0 = a;
        int count = 0;

        while(u0 != 1){
            if(u0 % 2 == 0){
                u0 = u0/2;
            }
            else{
                u0 = (3*u0) + 1;
            }
            count ++;
        }
        if(count > meilleur_k){
            meilleur_k = count;
            meilleur_a = a;
            
        }


    }
    printf("meilleur a :%d\n meilleur k :%d\n",meilleur_a,meilleur_k);



    return 0;
}