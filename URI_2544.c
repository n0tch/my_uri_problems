#include <stdio.h>
#include <math.h>

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,num;
    
    while(scanf("%d", &n) != EOF){
      num = 0;
      while(pow(2,num) != n){
        num++;
      }
        printf("%d\n", num);
    }
    
    return 0;
}