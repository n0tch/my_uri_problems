#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int A,B,C;
     
     scanf("%d %d %d", &A,&B,&C);
     int maior = (A+B+abs(A-B))/2;
    maior = (maior+C+abs(maior-C))/2;
    
    printf("%d eh o maior\n", maior);
    return 0;
 
    return 0;
}