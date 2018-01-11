#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i;
    double n, N[100];
    scanf("%lf", &n);
    
    for(i=0;i<100;i++){
        N[i] = n;
        n/=2;
    }
    
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n", i,N[i]);
    }
    return 0;
}