#include <stdio.h>

int main () {

    int num[5], soma, i;
    printf("insira cinco valores:\n");
    soma = 0;

    for(i = 0; i < 5 ; i++){
scanf("%d", &num[i]);

soma += num[i];

    }
 
    printf("%d eh a soma dos valores", soma);

}