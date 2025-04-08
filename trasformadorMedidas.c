#include <stdio.h>

int main () {

    int  ValorM, ValorC, ValorD, ValorMM;


    printf("Insira o valor em metros: ");
    scanf("%d", &ValorM);

    ValorD = ValorM*10;
    ValorC = ValorD*10;
    ValorMM = ValorC*10;

printf(" %d metros corresponde a %d Decimetros. %d Centimetros. %d Milimetros", ValorM, ValorD, ValorC, ValorMM);

return 0;




}
