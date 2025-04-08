#include <stdio.h>

int main () {

int opcao, quantidade;
float total;
printf("insira a quantidade de bilhetes: \n maximo = 30 \n");
scanf("%d", &quantidade);
printf(" 1 - passageiro comum - 4.50\n");
printf(" 2 - estudante - 2.25\n");
printf(" 3 - idoso(acima de 60 anos) - gratuito\n");
printf(" 4 - pessoa com deficiencia - gratuito\n");
scanf("%d", &opcao);

if(quantidade >=1 && quantidade<=30) {

    switch(opcao){

        case 1:
        total = quantidade * 4.50;
        printf(" o valor total da(s) passagens eh de %.2f.", total);
        break;

        case 2:
        total = quantidade * 2.25;
        printf("o valor total da(s) passagens eh de %.2f", total);
        break;

        case 3:
        printf(" passagem(s) gratuitas!");
        break;

        case 4:
        printf("passagem(s) gratuitas!");
        break;

        default:
        printf("passageiro invalido!");
        break;

    }
    } else {

        printf(" valor da quantidade de passagens invalida!");

    }

    return 0;

}



