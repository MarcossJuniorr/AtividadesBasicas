#include <stdio.h>

int main () {

int notas;

printf("insira um valor em reasi: \n");
scanf("%d", &notas);


if( notas > 0 && notas < 1000000){

printf("%d notas de 100.00\n", notas/100);
notas%= 100;
printf("%d notas de 50.00 \n", notas/50);
notas%=50;
printf("%d notas de 20.00 \n", notas/20);
notas%=20;
printf("%d notas de 10.00\n", notas/10);
notas%=10;
printf("%d notas de 2.00\n", notas/2);
notas%=2;
printf("%d notas de 1.00\n", notas);



} else {
    printf("numero invalido!\n");
}

return 0;


}