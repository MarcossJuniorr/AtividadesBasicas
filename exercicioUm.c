#include <stdio.h>

int main () {

char opcao;
int cont, cont1, i;
i = 1;
cont = 0, cont1 = 0;
while (i <= 10){

    printf("insira C para entregue e X para problema\n");
    scanf("%c", &opcao);
    getchar();

    switch( opcao ) {

case 'C': case 'c':
cont++;
i+= 1;
break;

case 'X': case 'x':
cont1++;
i += 1;
break;

default:
printf("tente novamente\n");

    }

}

printf(" %d produtos com problemas\n", cont1);
printf(" %d foram entregues corrretamente", cont);


}