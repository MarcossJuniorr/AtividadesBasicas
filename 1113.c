#include <stdio.h>
 
int main() {
 
int X, Y;

scanf("%d %d", &X, &Y);

if( X < Y){
    printf("CRESCENTE\n");
} else {
    printf("DECRESCENTE\n");
}

while (X != Y){
    scanf("%d %d", &X, &Y);

if( X < Y){
    printf("CRESCENTE\n");
} else if ( X > Y) {
    printf("DECRESCENTE\n");
} else if ( X = Y){
    break;
}
}

    
}