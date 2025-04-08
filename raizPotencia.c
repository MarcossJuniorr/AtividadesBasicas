#include <stdio.h>
#include <math.h>

int main() {
    
    char opcao;
    float operacao, operacao1;
    int num1, num2;

    printf("escolha two numbers: \n");
    scanf("%d %d", &num1, &num2);
    printf("R - Raiz \n");
    printf(" P - Potencia\n");
    printf(" D - resto divisao\n");
    getchar();
    scanf("%c", &opcao);

    switch (opcao){

case 'R': case 'r':
 operacao = sqrt(num1);
 operacao1 = sqrt(num2);
 printf(" %.2f %.2f sao as raizes quadradas de %d e de %d ", operacao, operacao1, num1, num2);
break;

case 'P': case 'p':
operacao = pow(num1,num2);
printf("%.2f eh a potencia de %d elevado a %d\n", operacao, num1, num2);
break;

case 'D':
if( num2 == 0){
    printf("operecao invalida, divisao por 0\n");
}  else {
operacao = num1%num2;
printf("%.2f eh o resto da divisao de %d dividido por %d\n", operacao, num1, num2);
break;
}

default:
printf("operacao invalida!\n");

    }

    return 0;
}