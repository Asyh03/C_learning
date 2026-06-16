#include<stdio.h>

int main(){
    int nb,count;
    printf("Entrez votre nombre : \n");
    scanf("%d",&nb);
    count = 0;
    while(nb != 0){
        
        if(nb % 10 != 0) {
          count += 1;
        }
        nb = nb/10;

    }
    printf("%d",count);
    return 0;
}