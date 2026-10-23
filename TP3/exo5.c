#include<stdio.h>

unsigned int string_lenght(char *mot){
    unsigned int len = 0;
    unsigned int i = 0;    
    while (mot[i] != '\0'){
        len ++;
        i++;
    }
    return len;
}


unsigned int char_count(char *mot, char word){
    unsigned int nb_occ = 0;
    unsigned int i = 0;
    int len = string_lenght(mot);
    while(i < len){
        if(mot[i] == word)
            nb_occ ++;
        i ++;
    }
    return nb_occ;
}

int string_compare(char *word1, char *word2){
    int min_len = string_lenght(word1) <= string_lenght(word2) ? string_lenght(word1) : string_lenght(word2); // La longueur minimale
    for(unsigned int i = 0; i < min_len; i++){
        if(word1[i] != word2[i]){
            if(word1[i] < word2[i]){
                return -1;
                
            }
            if(word1[i] > word2[i])
                return 1;
        }
    }
    if(string_lenght(word1) > string_lenght(word2))
        return 1;
    if(string_lenght(word1) < string_lenght(word2))
        return -1;
    else 
        return 0;
}

int string_compare_rec(char *word1, char *word2){
    if (*word1 == '\0' && *word2 == '\0')
        return 0;
    if(*word1 < *word2)
        return -1;
    if(*word1 > *word2)
        return 1;
    if(*word1 == *word2) 
        return(string_compare_rec(word1+1,word2+1));
    
}

void string_copy(char *s1, char *s2){
    //
    //Avec for
    for (unsigned int i = 0; i < string_lenght(s1); i++){ //Ici le \0 n'est pas copié dans le second mot il fau
        *(s2+i) = *(s1+i);
    }


    /*unsigned int i = 0;
    while(s1[i] !='\0'){
        *(s2+i) = *(s1+i);
        i++;
    }
    *(s2+i) = '\0';*/
}

void delete_char(char *s1, char mot){
    unsigned int i = 0;
    while (s1[i] != '\0' && s1[i] != mot){
        i++;
    }
    for(unsigned int k = i;s1[k] != '\0';k++){
        s1[k] = s1[k+1];
    }
    

}

//Cette version ne prend pas en compte le cas où la chaîne commence avec un espace ou si elle se termine par un espace
void delete_useless_space(char *s){
    unsigned int i = 0;
    while (s[i] != '\0' && s[i] == ' '){
        delete_char(s,' ');
        i++;
    }
    for(unsigned int j = i;s[j]!='\0';j++){
        if(char_count(s+j,' ') > 1){
            if(*(s+j)==' '){
                delete_char((s+j),' ');
            }
        }
    }

    if(*s != '\0' && *s == ' ')
        delete_char(s,' ');
}

int main(){
    char mot1[] = "bonjour a tous";
    char mot2[] = "bonjour   a  tous";
    char s1[100] = "ProgCaaaa";
    char s2[100] = "";
    char word = 'o'; // ' ' --> caractère et "" --> chaine de caractère
    printf("%u\n",string_lenght(mot1));
    printf("%u\n",char_count(mot1,word));
    printf("%d\n",string_compare_rec(mot1,mot2));
    string_copy(s1,s2);
    printf("Voilà vos deux mots : s1 = %s et s2 = %s\n",s1,s2);
    delete_char(mot1,word);
    printf("Voici votre nouveau mot avec la lettre supprimée :%s\n",mot1);
    delete_useless_space(mot2);
    printf("Voici votre nouveau mot sans espace inutiles :%s\n",mot2);
    
    return 0;
}