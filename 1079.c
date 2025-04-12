#include <stdio.h>
 
int main() {
 
    int i, valor;
    double media1, media2, media3, medias;
    
    scanf("%d", &valor);
    
    for (i = 0; i < valor ; i++){
        scanf("%lf",&media1);
        scanf("%lf",&media2);
        scanf("%lf",&media3);
        
        medias = ((media1 * 2) + (media2 * 3) + (media3 * 5)) / 10;
        printf("%1.lf\n", medias);
    }
 
    return 0;
}