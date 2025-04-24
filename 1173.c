#include <stdio.h>
 
int main() {

int x[10], i;

scanf("%d", &x[0]);
x[1] = x[0] * 2;

for(i = 2; i < 10; i++){
    x[i] = x[i - 1] * 2;
}

for(i = 0; i < 10; i++){
    printf("N[%d] = %d\n",i, x[i]);
}

}