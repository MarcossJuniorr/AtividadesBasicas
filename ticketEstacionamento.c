#include <stdio.h>

int main() {

    int i;
char opcao;
i = 1;
 while(i == 1)
{
    printf("voce possui cartao de estacionamento?\n ");
    scanf("%c", &opcao);
    getchar();
    switch (opcao) {

        case 'S': case 's':
        printf(" Entrada liberada!\n");
        i = 0;
        break;

        case 'N': case 'n':
        printf("Entrada Negada !\n");
        printf("tente novamente\n");
        break;

        default:
        printf("insira caracter aceitavel!");

    }

}

printf("siga em frente!");

return 0;


}