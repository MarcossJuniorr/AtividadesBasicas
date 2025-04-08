#include <stdio.h>

int main () {

float reais, cotacao, total;
int opcao;

printf("insira o valor em reais\n");
scanf("%f", &reais);
printf("1 - Dolar\n");
printf("2 - Euro\n");
printf("3 - Libra\n");
scanf("%d", &opcao);

switch(opcao){

case 1:
cotacao = 5.808;
total = reais * cotacao;
printf(" %.3f reais em dolares eh %.3f", reais, total);
break;

case 2:
cotacao = 6.305;
total = reais * cotacao;
printf("%.3f reais em euro eh %.3f", reais, total);
break;

case 3:
cotacao = 7.522;
total = reais * cotacao;
printf("%.3f reais em libras eh %.3f", reais, total);
break;

default:
printf("codigo invalido");
break;
}

return 0;
}









