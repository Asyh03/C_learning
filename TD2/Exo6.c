#include<stdio.h>

int main(){

    int a,b;
    
    int r=0;
    printf("Entrez a : ");
    scanf("%d",&a);
    printf("Entrez b : ");
    scanf("%d",&b);
    int c = a;
    int d = b;


    while( b != 0){
        if(b%2 == 0){
            a *= 2;
            b /= 2;
        } else {
            b -= 1;
            r += a;
        }

    }
    printf("%d x %d = %d",c,d,r);


    return 0;
}