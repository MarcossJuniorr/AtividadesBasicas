#include <stdio.h>

int main (){

 int i, x[5];

 for(i = 0; i< 5; i++){
    scanf("%d", &x[i]);
 }
for(i = 0; i<5; i++){
    if(x[i] <= 10){
        printf("A[%d] = %d\n", i, x[i]);
    }
}

}
