#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int n,i,maior, indice;
     
     for(i=1;i<=100;i++){
         scanf("%d", &n);
         if(i==0){
             maior = n;
             indice = i;
         }
         
         if(maior < n){
             maior = n;
             indice = i;
         }
     }
     
     printf("%d\n%d\n", maior, indice);
 
    return 0;
}