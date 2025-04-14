#include <stdio.h>

int main()
{
    int X, Y, i = 1, j;

    scanf("%d %d", &X, &Y);

   while(i <= Y){
      for(j = 0; j < X; j++){
         printf("%d", i);
         if(j < X - 1){
            printf("_");
         }
         i++;
      }
      printf("\n");
   }



    return 0;
}