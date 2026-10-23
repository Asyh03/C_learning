#include <stdio.h>
#include "array_fonction.h"

void swap(int *a, int *b){
    int tmp = *a; //tmp garde la valeur pointée par a ||||||tmp doit recevoir une valeur et non une adresse 
    *a = *b;
    *b = tmp;
}

void array_sort(int *t, unsigned int n){
    unsigned int i = 0;
    do{
        int mini = array_min(t+i,n-i);
        int idx = array_find(t+i,n-i,mini);
        printf("idx = %d\n",idx);
        swap(t+idx+i,t+i);
        i+=1;
    }while(i < n);
}

int main(){
    int tab[] = {100,15,4,1,3,0,5};
    /*int a = 2;
    int b = 5;
    swap(&a,&b);
    printf("a = %d et b = %d\n",a,b);*/
    array_sort(tab,7);
    for(int k = 0;k<7;k++){
        printf("tab[%d] = %d\n",k,tab[k]);
    }
    return 0;
}