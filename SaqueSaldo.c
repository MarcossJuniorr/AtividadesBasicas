#include <stdio.h>

int main () {

    int saque, saldo, i;
i = 0;
printf("insira o saldo do seu banco:\n ");
scanf("%d", &saldo);
    while(i<5){


printf("insira o valor do saque que deseja: \n");
scanf("%d", &saque);
if(saldo < saque){
    printf("Saldo insuficiente, tente novamente\n");
    i+=1;
} else if( saldo > saque){
   if(saque%10 == 0){
    printf("Saque realizado!");
    i = 5;
   } else {
    printf("valor invalido, tente novamente\n");
    i+=1;
   }
}



    }


}