#include <stdio.h>

int main () {

int i, num, multi;
scanf("%d", &num);

for ( i = 0 ; i <= 10 ; i++){

    multi = num * i;
    printf(" %d x %d = %d\n", num, i, multi);

}

}