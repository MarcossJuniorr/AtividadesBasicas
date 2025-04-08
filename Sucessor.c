#include <stdio.h>
#include <math.h>

int main () {

float Nume,Dobro, Quadrado, Sucessor;

printf(" insira um numero inteiro: ");

scanf("%f", &Nume);

Dobro = Nume*2;
Quadrado = pow(Nume,2);
Sucessor = Nume + 1;

printf("%0.f eh o quadrado do numero. %0.f o dobro. %0.f o sucessor", Quadrado, Dobro, Sucessor);

return 0;






}
