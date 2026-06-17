#include<stdio.h>
#include<math.h>

int main(){
    int n;
    // -1 pour False et 1 pour True
    
    printf("Entrez votre nombre : ");
    scanf("%d",&n);
    for(int j = 1;j<=n;j++){
        int res = 1;

        if(j == 1){
            res = -1;
        }
        for(int i= 2;i<=sqrt(j);i++){
            if( j %i == 0) {
                res = -1;
                    
                }
                
            }
        

        if (res == 1){
            printf("%d",j);
            
        }
        else {
    }
return 0;

}