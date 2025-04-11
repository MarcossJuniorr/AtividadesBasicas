#include <stdio.h>
 
int main() {
 
  int num1,num2,i;
  scanf("%d",&num1);
  i = 0;
  while(i<=num1){
      scanf("%d", &num2);
      if(num2 < 0 ){
          if ( num2%2 == 0){
              printf("EVEN NEGATIVE\n", num2);
                           } else {
                               printf("ODD NEGATIVE\n",num2);
                           }
                 }
                 
                 if( num2 > 0){
                     if(num2%2 == 0){
                         printf("EVEN POSITIVE\n");
                     } else {
                         printf("ODD POSITIVE\n");
                     }
                 }
                 if (num2 == 0){
                     printf("NULL\n");
                 }
                 i++;
  }
 
    return 0;
}

