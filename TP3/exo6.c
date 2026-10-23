#include<stdio.h>
#include<string.h>


void print_binary(int n){
    //int cpt = 0;
    //int k = n;
    do{
        printf("%d",n%2);
        n = n/2;
        
    }while(n/2 != 0);
    printf("%d",n);
    /*if(n == 0)
        cpt++;
        return;
    print_binary(n/2);
    printf("%d ",n%2);*/
}

int main(){
    print_binary(7);
    printf("\n");
    return 0;
}