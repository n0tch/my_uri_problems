#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    char rastro[61];
    int ops, aux, count, i;
    
    while(scanf("%s", &rastro) != EOF){
      scanf("%d", &ops);
      
      for(i=0, count=0,aux=0;i<strlen(rastro);i++){
        if(rastro[i] == 'W'){
          count++;
          aux = 0;
          //printf("achei w\tcount: %d\n", count);
        }else if(rastro[i] == 'R' && aux < ops){
          if(aux == 0){
            count++;
            //printf("primeiro R\tcount: %d\n", count);
          }
          aux++;
          //printf("aux: %d\n", aux);
        }
        
        if(aux == ops){
          //printf("fora do if: %d\n", aux);
          aux = 0;
        }
        
      }
      
      printf("%d\n", count);
    }
    
    return 0;
}