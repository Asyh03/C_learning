#include<stdio.h>
#define N 4

int nb_occ(int *t, unsigned int n,int val){
    int cpt = 0;
    for(int i = 0;i<n;i++){
        if (*(t+i) == val)
            cpt++;
    }
    return cpt;
}

int nb_occol(unsigned int n ,int t[][n] ,  int col, int val){
    int cpt = 0;
    for(int k = 0;k<n;k++){
        if(t[k][col] == val){
            cpt ++;
        }
    }
    return cpt;

}

void display(int n, int t[][n]){
    for(unsigned int rows = 0; rows<n;rows++){ //Parcours des lignes
        for(unsigned int col = 0; col< n; col++){ // Parcours des colonnes
            printf("tab[%d][%d] = %d\n",rows,col,t[rows][col]);
        }
    }
}

int is_latin_square(unsigned int n ,int t[][n]){
    for(unsigned int i = 0; i<n;i++){
        for(unsigned int j = 0; j< n; j++){
            if ((nb_occ(t[i],n,t[i][j])>1) ||(nb_occol(n,t,j,t[i][j]) > 1)){
                return 0;
            }
        }
    }
    return 1;

}
int main(){
    int tab[N][N] = {{1,2,3,4},{2,3,4,1},{3,4,1,2},{4,1,2,3}};
    //printf("%d",nb_occ(tab,n,1));
    display(N,tab);

    if(is_latin_square(N,tab)== 1)
        printf("Your array is a Latin square\n");
    else
        printf("Your array is not a Latin square\n");
    
    return 0;
}