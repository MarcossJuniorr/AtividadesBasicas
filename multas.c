#include <stdio.h>

int main () {

int velocidade;
printf("insira a velocidade do carro: \n");
scanf("%d", &velocidade);

switch(velocidade)
{

case 0 ... 79:
printf("Voce nao tomou multa  \n");
break;

case 80 ... 99:
printf("Voce tomou uma multa de 200 R$!!!!");
break;

case 100 ... 1224:
printf("Voce tomou uma multa de 400R$!!!");
break;



default:
printf("Voce quebrou a barreira do som!");
break;
}


return 0;
}