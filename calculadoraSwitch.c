#include <stdio.h>

int main () {

int X, Y;
char opcao;
float calculo;

printf("escolha a operacao:\n");
printf("* = mmultiplicacao\n");
printf(" / = divisao \n");
printf("+ = soma\n");
printf("- = para subtracao\n");
scanf("%c", &opcao);
printf(" insira dois numeros inteiros: \n");
scanf("%d %d", &X, &Y);


switch(opcao){

case '*':
calculo = X * Y;
printf(" o valor da multiplicaco eh de %.2f", calculo);
break;

case '/':
if ( Y != 0){

calculo = X/Y;
printf("o valor da divisao eh de %.2f", calculo);

} else {

    printf("o divisor eh igual a zero, conta impossivel");
}
 break;

 case '+':
 calculo = X+Y;
 printf("o resultado da soma eh de %.2f", calculo);
 break;

 case'-':
 calculo = X-Y;
 printf(" o resultado da subtracao eh de %.2f", calculo);
 break;

default:
printf("caractere invalido!");
break;

}

return 0;

}