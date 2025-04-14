#include <stdio.h>

int main () {

int idade, i = 0;
double media1, media = 0;

scanf("%d", &idade);
media += idade;
i++;

while( idade > 0) {
   scanf("%d",&idade);
   if(idade > 0){
      media += idade;
      i++;
   }
}

media1 = media/i;
printf("%.2lf", media1);

}