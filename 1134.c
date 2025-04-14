#include <stdio.h>

int main (){

int opcao, gasolina = 0, alcool = 0, diesel = 0;

scanf("%d", &opcao);

if(opcao == 1){
   alcool += 1;
} else if ( opcao == 2){
   gasolina += 1;
} else if (opcao == 3){
   diesel += 1;
}


while( opcao != 4 ){

   scanf("%d", &opcao);

if(opcao == 1){
   alcool += 1;
} else if ( opcao == 2){
   gasolina += 1;
} else if (opcao == 3){
   diesel += 1;
}

}

printf("MUITO OBRIGADO\n");
printf("Alcool:%d\n", alcool);
printf("Gasolina:%d\n", gasolina);
printf("Diesel:%d\n", diesel);

}