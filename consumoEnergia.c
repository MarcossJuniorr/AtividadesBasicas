#include <stdio.h>

int main () {

    float   energia, consumo;

    printf("insira o consumo em KWh\n");
    scanf("%f", &energia);

    if(energia <= 50){
        consumo = energia * 0.50;
        printf("o consumo foi %.2f", consumo);

    } else if ( energia >= 51 && energia <= 100){

        consumo = energia * 0.75;
        printf("o consumo foi de %.2f ", consumo);


    } else if ( energia >= 101){

        consumo = energia * 1.20;
        printf("o consumo foi de %.2f", consumo);

    }

return 0;


}