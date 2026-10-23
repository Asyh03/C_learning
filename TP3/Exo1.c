#include<stdio.h>
int array_min(int *t, unsigned int n){
    int mini = *t;
    for(unsigned int i = 1;i<n;i++){
        if(*(t+i) < mini)
            mini = *(t+i);
    }
    return mini;
}

int array_max(int *t, unsigned int n){
    int maxi = *t;
    for(unsigned int i = 1;i<n;i++){
        if(*(t+i) > maxi)
            maxi = *(t+i);
    }
    return maxi;
}

int array_find(int *t, unsigned int n,int value){
    for (unsigned int i = 0; i<n; i++){
        if (*(t+i) == value)
            return i;
    }
    return -1;

}

float array_average(int *t , unsigned int n){
    float s = 0;
    for(unsigned int i = 0; i< n;i++){
        s += *(t+i);
    }
    return s / n;
}
int main(){
    unsigned int n = 7;
    int tab[] = {5,8,2,-6,4,2,1};
    int value;
    printf("Entrez la valeur que vous cherchez : ");
    scanf("%d",&value);

    printf("La valeur minimale du tableau est %d\n",array_min(tab,7));

    printf("La valeur maximale du tableau est %d\n",array_max(tab,7));

    if (array_find(tab,n,value) == -1)
        printf("la valeur n'est pas dans le tableau\n");
    else 
        printf("la valeur se trouve à l'indice %d\n",array_find(tab,n,value));

    printf("La moyenne des valeurs du tableau est : %f\n",array_average(tab,n));
    return 0;
}