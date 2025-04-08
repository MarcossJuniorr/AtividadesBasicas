#include <stdio.h>

int main () {

int num1, num2, num3, num4, positivo, negativo, impar, par;

printf("insira quatro valores ao seu belprazer\n");
scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

positivo = 0;
negativo = 0;
impar = 0;
par = 0;

if(num1 >= 0 ){
positivo ++;
}
if(num2 >= 0 ){
    positivo ++;
    }
    if(num3 >= 0 ){
        positivo ++;
        }
        if(num4 >= 0 ){
            positivo ++;
            }
            if(num1 <= 0 ){
                negativo ++;
                }
                if(num2 <= 0 ){
                    negativo ++;
                    }
                    if(num3 <= 0 ){
                        negativo ++;
                        }
                        if(num4 <= 0 ){
                            negativo ++;
                            }
 if ( num1%2 == 0){
 par ++;
 }  else {
    impar ++;
 } 
 if ( num2%2 == 0){
    par ++;
    }  else {
       impar ++;
    }  
    if ( num3%2 == 0){
        par ++;
        }  else {
           impar ++;
        }   
        if ( num4%2 == 0){
            par ++;
            }  else {
               impar ++;
            }   

   printf("%d numeros sao positivos\n", positivo);
   printf("%d numeros sao negativos\n", negativo);
   printf("%d numeros sao pares\n", par);
   printf("%d numeros sao impares\n", impar);

}