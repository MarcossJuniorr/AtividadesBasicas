#include <stdio.h>

int main () {

    int termo, aux, i, a, b;
    a = 0;
     b= 1;

printf("insira o numero de termos de Fibonacci: \n");
scanf("%d", &termo);

for( i = 0; i< termo; i++){
 aux = a+b;
a = b;
b = aux;
printf("%d\n", aux);

}



}