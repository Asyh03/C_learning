#include <stdio.h>
int main()
{
int p,*n=&p;
printf("Entrez une valeur pour n : ");// n n'est pas initialisé car *n pointe quelque part au hasard donc il faut ini
scanf("%d",n);
printf("Vous avez entre la valeur n = %d\n",*n);
return 0;
}