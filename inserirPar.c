#include <stdio.h>

int main () {

    int numero1, numero2, numero3, numero4, numero5, tentativas, par1, par2, par3, par4, par5;

    tentativas = 5;

    printf("insira um numero par, voce tem %d tentativas\n", tentativas);
    scanf("%d", &numero1);
    par1 = numero1%2;

    if(par1 == 0 ){ 
printf("parabens, numero par!!!\n");
    } else {
        tentativas --;
        printf("voce tem mais %d tentativas\n", tentativas);
        scanf("%d", &numero2);
        par2 = numero2%2;
    } if (par2 == 0){
       printf("parabens, numero par!!!!\n");
    } else {
        tentativas --;
        printf("voce tem mais %d tentativas\n", tentativas);
        scanf("%d", &numero3);
        par3 = numero3%2;
    } if (par3 == 0){
        printf("parabenssss, numero par!!!!\n");
    } else{
        tentativas --;
        printf("voce tem mais %d tentativas\n", tentativas);
        scanf("%d", &numero4);
        par4 = numero4%2;
    } if (par4 == 0){
        printf("parabens, numero par!!!!!!");
    } else if( tentativas --){
        printf("voce tem mais %d tentativas\n", tentativas);
        scanf("%d", &numero5);
        par5 = numero5%2;
    } else if (par5 == 0) {
        printf("congrats, numero par!!!");
    } else if (tentativas == 0) {
        printf("tentativas esgotadas :c");
    }

    
   

return 0;

  





}