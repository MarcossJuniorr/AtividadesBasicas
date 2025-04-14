#include <stdio.h>
 
int main() {
 
float x, y, divi;
int z, i;

scanf("%d", &z);

for(i = 0; i < z; i++){
    
    scanf("%f %f", &x, &y);
    
    divi = x/y;
    if( x == 0){
        printf("divisao impossivel\n");
    } else {
        printf("%2.f\n", divi);
        
    }
    
    
}

 
    return 0;
}