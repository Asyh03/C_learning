#include<stdio.h>
int main(){
    char lettre,phrase;
    printf("Entrez votre lettre : ");
    scanf("%c",&lettre);
    if(('a'<=lettre && lettre<='z') || ('A'<=lettre && lettre <= 'Z')){
        printf("le code numerique de votre lettre %c est : %d\n",lettre,lettre);
    }
    else{
        printf("Saisie invalide\n");
    }



    /*Question 2*/
    printf("Entrez une phrase : ");
    scanf(" %c",&phrase);
    
    do{
        
        if('a'<= phrase && phrase<='z'){
            phrase -= 32;
        }
        else if ('A'<= phrase && phrase<='Z'){
            phrase += 32;
        }
        printf("%c",phrase);
        scanf("%c",&phrase);
    
    }while(phrase != '\n');
    printf("\n");
        

    return 0;

    
}