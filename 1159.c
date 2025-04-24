#include <stdio.h>

int main (){

    int x,soma = 0, i = 0;

    scanf("%d", &x);
    while( x != 0){
        if(x%2 == 0){
            for(i= 0; i<5; i++){
            soma += x + 2 * i;
        }
          
        } else if(x%2 != 0){
         x += 1;
         soma += x;
         for(i = 1; i<5; i++){
          soma+= x + 2 * i;
         }
        }
        printf("%d\n", soma);
        scanf("%d", &x);
        soma = 0;
    }
}

