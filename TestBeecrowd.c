 #include <stdio.h>

int main() {
    int num[10], cont,i;
    cont = 0;

    printf("insira 10 valores: \n");
for(i = 0; i < 10; i++){
scanf("%d\n", &num[i]);

if(num[10]%2 == 0){
    cont++;
}

}

printf("%d numero pares", cont);

}


