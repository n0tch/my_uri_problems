#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double A,B,C;
     
     scanf("%lf %lf %lf", &A,&B,&C);
    
    printf("TRIANGULO: %.3f\n", (A*C)/2);
    printf("CIRCULO: %.3f\n", (3.14159 * (C*C)));
    printf("TRAPEZIO: %.3f\n", ((A+B)*C)/2);
    printf("QUADRADO: %.3f\n", (B*B));
    printf("RETANGULO: %.3f\n", (A*B));
 
    return 0;
}