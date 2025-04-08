#include <stdio.h>

int main () {

int Opcao1,Opcao2;
float Agua, SucoNatural, Pizza, Hamburguer, Salada, Refrigerante,Pedido, Pedido2;

printf("Escolha um prato principal: \n");
printf("1 - Hamburguer\n");
printf("2 - Pizza \n");
printf("3 - Salada \n");
scanf("%d", &Opcao1);
printf("Escolha uma bebida: \n");
printf(" 1 - Sem bebida\n");
printf("2 - Refrigerante \n");
printf("3 - Suco Natural \n");
printf("4 - Agua \n");
scanf("%d", &Opcao2);

switch (Opcao1){

case 1:
Pedido = 15.00;
break;

case 2: 
Pedido = 30.00;
break;

case 3:
Pedido = 18.00;
break;


} 

switch (Opcao2) {

case 1:
Pedido2 = Pedido;
printf("O valor do pedido eh %.2f", Pedido2);
break;

case 2:
Pedido2 = Pedido + 6.00;
printf("O valor do pedido eh %.2f", Pedido2);
break;

case 3:
Pedido2 = Pedido + 8.00;
printf("O valor do pedido eh %.2f", Pedido2);
break;
case 4:
Pedido2 = Pedido + 3.00;
printf("O valor do pedido eh %.2f", Pedido2);
break;


}

}

