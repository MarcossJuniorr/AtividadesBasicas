#include <stdio.h>

int main () {

int num, i, cont, primo;

printf("insira um numero: \n");
scanf("%d", &num);

for (i = 1 ; i <= num ; i++){

    primo = num%i;
if (primo == 0) {
    cont ++;
}

    }

    if(cont == 2){

        printf("o numero eh primo");
        
        } else {
            printf("numero nao eh primo");
        }

}











