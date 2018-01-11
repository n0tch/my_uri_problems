#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n, ant, i=0, flg=0;
    
    while(scanf("%d", &n) != EOF){
      
      if(i == 0){
        ant = n;
        i=1;
      }
      else if(n < ant && !flg){
        printf("%d\n", (ant+1));
        flg = 1;
      }
      ant = n;
    }
    
    if(!flg)
      printf("%d\n", n+1);
      
    return 0;
}