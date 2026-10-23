#include<stdio.h>
#include <limits.h>
int main(){
    printf("Taille des types \n");
    printf("char : %ld octets\n",sizeof(char));
    printf("short : %ld octets\n",sizeof(short));
    printf("int : %ld octets\n",sizeof(int));
    printf("long : %ld octets\n",sizeof(long));
    printf("long long : %ld octets\n",sizeof(long long));
    printf("float : %ld octets\n",sizeof(float));
    printf("double : %ld octets\n",sizeof(double));
    printf("long double : %ld octets\n",sizeof(long double));

    printf("Un octet contient %d bits \n",CHAR_BIT);

    printf("Pour representer un short, il faut %lu bits\n",sizeof(short)*8);
    printf("Pour representer un int, il faut %lu bits\n",sizeof(int)*8);

    return 0;
}
