#include<stdio.h>
int main(){
    int a,*p;
    p = &a;
    printf("Entrez une valeur de a : ");
    scanf("%d",&a);
    printf("valeur de p : %d",p);

    return 0;
}