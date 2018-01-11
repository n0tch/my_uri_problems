#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    char letras[27];
    int tam,i,pos;
    
    while(scanf("%s", letras) != EOF){
      scanf("%d", &tam);
      for(i=0;i<tam;i++){
        scanf("%d", &pos);
        printf("%c", letras[pos-1]);
      }
      printf("\n");
    }
    return 0;
}