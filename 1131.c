#include <stdio.h>
 
int main() {
 
 int  x, y, opcao, grenais = 0, vitoI = 0, vitoG = 0, empate = 0;
 
 do {
    scanf("%d %d", &x ,&y);
    printf("Novo grena (1-sim 2-nao)\n");
    scanf("%d\n", &opcao);
    if(x<y){
    vitoG += 1;
    } else if (x>y){
      vitoI += 1;
    } else if (x=y){
     empate += 1;
    }

grenais+= 1;
 }while( opcao == 1);

 

 printf("%d grenais\n", grenais);
 printf("Inter:%d\n", vitoI);
 printf("Gremio:%d\n", vitoG);
 printf("Empates:%d\n", empate);

 if(vitoG>vitoI){
    printf("Gremio venceu mais\n");
 } else if (vitoG<vitoI){
    printf("Inter venceu mais\n");
 } else if (vitoI==vitoG){
    printf("Nao houve vencedor\n");
 }


 
    return 0;
}