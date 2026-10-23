#include<stdio.h>

double f(double x){
    return x*(x*x-2)-5;
}
double absolute(double x) {
    return x > 0 ? x : -x;
}
double derivate(double x){
    return 3*x*x - 2;
}
double newton_search_rec(double eps,double x){    
    if (absolute(f(x)) < eps)
        return x;
    double x1 = x -(f(x)/derivate(f(x)));
    return newton_search_rec(eps,x1);
    x = x1;
    
    
}
int main(){
    double eps = 1.0;
    double alpha = newton_search_rec(eps,3);
    printf("Newton à %f près après la virgule\n",alpha);

}