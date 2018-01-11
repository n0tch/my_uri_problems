#include <stdio.h>
#include <math.h>

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double raio, area;
    scanf("%lf", &raio);
    area = pow(raio,2)*(3.14159);
    
    printf("A=%.4lf\n", area);
    return 0;
}