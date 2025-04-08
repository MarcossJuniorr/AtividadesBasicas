#include <stdio.h>

int main() {

int i, num, div;
printf("insira um valor para verificar se eh primo:\n");
scanf("%d", &num);
div = 0;

if(num != 0 || num !=1){
for(i = 1; i <= num; i++){
if(num%i == 0){
    div++;
} 
}
}

if(div != 2){
    printf("nao eh primo");
} else if (div == 2){
    printf("eh primo!");
}

}