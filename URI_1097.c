#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i,j,inicio=7, aux, max = 3;
    for(i=1;i<=9;i+=2){
      for(j=inicio,aux=0;aux<max;aux++,j--){
        printf("I=%d J=%d\n", i,j);
        if(aux==2){
          inicio = inicio + 2;
        }
      }
    }
    return 0;
}