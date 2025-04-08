#include <stdio.h> 

int main () {
    int num[4], i;

    printf("insira quatro valores:\n");
    for(i=0; i < 4; i++){
      scanf("%d", &num[i]);
    }

    for(i = 3 ; i >= 0; i--){
      printf("%d ", num[i]);
    }
  
}