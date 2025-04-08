#include <stdio.h>

int main() {

char opcao;
int s, n, soma;
n = 0;
s = 0;

printf("voce trabaia? (s/n)\n");
scanf("%c", &opcao);
if(opcao == 's'){
    s++;
} else {
    n++;
}
while(opcao == 's' || opcao == 'n'){
    printf("voce trabaia? (s/n)\n");
    scanf(" %c", &opcao);
 
    if(opcao == 's'){
        s+= 1;
    } else if ( opcao == 'n') {
        n+= 1;
    }
  
}
soma= s + n;
printf("%d trabalham\n", s);
printf("%d nao trabalham\n", n);
printf("%d responderam a pesquisa.", soma);



}
