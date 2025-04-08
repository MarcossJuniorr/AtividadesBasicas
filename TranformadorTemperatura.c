#include <stdio.h>

int main () {

//int ValorF, ValorC;
double ValorF, ValorC;

printf("Insira o valor em Farenheits: ");
//scanf("%d", &ValorF);
scanf("%lf", &ValorF);

//ValorC = (ValorF-32) * 5/9;
ValorC = (ValorF-32)* (5.0/9.0);


//printf(" %d graus farenheits e igual a %d graus celsius. ", ValorF, ValorC);
printf(" %lf graus farenheits e igual a %lf graus celsius. ", ValorF, ValorC);

return 0;








}