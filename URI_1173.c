#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n, i, vet[10];
    scanf("%d", &n);
    for(i=0;i<10;i++){
        vet[i] = n;
        printf("N[%d] = %d\n", i, vet[i]);
        n *= 2;
    }
    return 0;
}