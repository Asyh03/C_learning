#include <stdio.h>
#define N 5

int array_min(int *t, int n){
    int mini = *t;
    for(int i = 0; i<n;i++){
        if(*(t + i)< mini)
            mini = *(t + i);
    }
    return mini;
}
int array_max(int *t, int n){
    int maxi = *t;
    for(int i = 0; i<n;i++){
        if(t[i] > maxi)
            maxi = *(t + i);
    }
    return maxi;
}

int array_find(int *t, unsigned int n, int value){
    for(int i = 0; i < n; i++){
        if(*(t+i) == value)
            return i;    
    }
    return -1;
}

float array_average(int *t, unsigned int n){
    float s = 0;
    for (int i = 0; i<n; i++){
        s += *(t+i);
    }
    return s/n;
}
int main(){
    int tab[] = {10,2,0,100,5};
    printf("la valeur minimale est %d\n",array_min(tab,N));
    printf("la valeur maximale est %d\n",array_max(tab,N));
    
    printf("La valeur recherchée se trouve à l'indice %d\n",array_find(tab,N,20));
    printf("La moyenne des valeurs du tableau est  %.2f\n",array_average(tab,N));
    return 0;
}