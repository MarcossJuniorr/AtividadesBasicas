#include <stdio.h>

int main () {

char opcao;
int contribuicao,idade;

printf("insira o seu genero\n");
printf("M - masculino\n");
printf("F - feminino\n");
scanf("%c", &opcao);
printf("insira sua idade e tempo de contribuicao: \n");
scanf("%d %d", &idade, &contribuicao);

switch(opcao){

case 'M': case 'm':
if( idade >= 65 && contribuicao >= 10){

printf("Aposentavel");
} else if (idade >= 63 &&  contribuicao >= 15) {
    printf("Aposentavel");
} else {
    printf("nao aposentavel");
}
break;

case 'F': case 'f':

if (idade >= 63 && contribuicao >= 10){

    printf("aposentavel");

} else if ( idade >= 61 && contribuicao >= 15){

    printf(" Aposentavel");
} else {

    printf(" nao aposentavel");

}
break;

default:
printf("genero invalido!");
break;
}

}



