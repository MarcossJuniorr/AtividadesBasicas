
   #include <stdio.h>
 
   int main() {
   
   int i, x, fato = 1;
   
   scanf("%d", &x);
   
   for(i = 0; i < x; i++){
   
      fato *= x - i;
   
   }
   
   printf("%d\n", fato);
       return 0;
   }
