#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    long double n;
    char numHex[120];
    scanf("%LE",&n);
    
    sprintf(numHex, "%LE", n);
    
    if(numHex[0] != '-'){
      printf("+");
    }
    printf("%.4LE\n", n);
    return 0;
}