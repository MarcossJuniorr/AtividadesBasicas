#include <stdio.h>

int main () {

 int  opcao; 
 float metroTecido, valorMetro, pedido, calculo;
    
printf("insira a metragem do fio que deseja e o valor: \n ");
scanf("%f %f", &metroTecido, &valorMetro);
printf("insira qual tipo de cliente voce eh: \n");
printf("1 - cliente comum \n");
printf("2 - funcionario \n");
printf("3 - cliente vip \n");
scanf("%d", &opcao);

switch(opcao) {

    case 1:

    pedido = metroTecido * valorMetro;
    printf(" o valor do tecido que deseja eh de %.2f", pedido);
    break;
    
    case 2:

    calculo = (metroTecido * valorMetro);
    pedido = calculo - (0.13 * calculo);

    printf("o valor do tecido que deseja eh de %.2f", pedido);
    break;

    case 3:

    calculo = (metroTecido * valorMetro);
    pedido = calculo - (0.07 * calculo);


    printf("o valor do tecido que deseja eh de %.2f", pedido);
    break;

    default:
    printf("valor de cliente invalido.");
    break;



}

return 0;

}