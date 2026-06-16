#include<stdio.h>
int main(){
    int n;
    printf("Entrez votre nombre :");
    scanf("%d",&n);

    int res = 1;
    for(int i = 1;i<=n;i++){
        res *= i;

    }
    printf("%d! = %d\n",n,res);
//-----------------------------------------------
    int res1 = 1;
    int i = 1;
    while(i <= n){
        res1 *= i;
        i ++;
    }
    printf("%d! = %d\n",n,res1);

//--------------------------------------------------------
    int res2 = 1;
    int j = 1;
    do {
        res2 *= j;
        j++;
    }while(j <= n);

    printf("%d! = %d\n",n,res2);
    return 0;
}