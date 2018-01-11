#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n;
    double r;
    
    scanf("%d", &n);
    r = ( pow( ( (1+sqrt(5) )/2) ,n) - pow( ( (1-sqrt(5) )/2),n) ) / sqrt(5);
    
    printf("%.1lf\n", r);
    return 0;
}