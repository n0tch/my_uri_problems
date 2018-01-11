#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, aux;
    scanf("%d", &N);
    printf("%d\n", N);
    aux = N/100;
    printf("%d nota(s) de R$ 100,00\n", aux);
    
    N = N - (100*aux);
    aux = N/50;
    printf("%d nota(s) de R$ 50,00\n", aux);
 
    N = N - (50*aux);
    aux = N/20;
    printf("%d nota(s) de R$ 20,00\n", aux);
    
    N = N - (20*aux);
    aux = N/10;
    printf("%d nota(s) de R$ 10,00\n", aux);
    
    N = N - (10*aux);
    aux = N/5;
    printf("%d nota(s) de R$ 5,00\n", aux);
    
    N = N - (5*aux);
    aux = N/2;
    printf("%d nota(s) de R$ 2,00\n", aux);
    
    N = N - (2*aux);
    aux = N/1;
    printf("%d nota(s) de R$ 1,00\n", aux);
    return 0;
}