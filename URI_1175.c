#include <stdio.h>
#define T 20
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N[T],i;
    
    for(i=0;i<T;i++){
        scanf("%d", &N[i]);
    }
    
    for(i=0;i<T;i++){
        printf("N[%d] = %d\n", i, N[(T-1)-i]);
    }

    return 0;
}