#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int vet[5], count = 0, i;
    
    for(i=0;i<5;i++){
        scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0){
            count++;
        }
    }
    
    printf("%d valores pares\n", count);
    return 0;
}