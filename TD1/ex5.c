#include <stdio.h>
#include<math.h>


int main(){
    float a,b,c;
    printf("Entrez les coefficients du polynôme :\n");
    printf("a : "); scanf("%f",&a);
    printf("b : "); scanf("%f",&b);
    printf("c : "); scanf("%f",&c);
    
    float discriminant = (b*b) - (4*a*c);
    if (discriminant < 0 ) {
        printf("Aucune solution");
    }
    else if( discriminant > 0) {
        float x1 =(-b-sqrt(discriminant))/(2 * a);
        float x2 = (-b + sqrt(discriminant))/(2 * a);
        printf("Les solutions sont x1 = %f et x2 = %f",x1,x2);
    }
    else {
        float x0 = (-b)/(2.0 * a);
        printf("La solution unique est : %f",x0);
    }

    
    
    
    return 0;
}