#include <stdio.h>

int main ( ) {

int num, inicio, resto, soma;

printf("insira um numero: ");
scanf("%d", &num);
soma = 0;
for (inicio = 1 ; inicio <= num ; inicio ++ ){
 resto = inicio%2;
 if( resto == 0){
   soma += inicio;
 

 }


    }

    printf("%d\n", soma);
}
