#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float vet[6];
    int i, count=0;
    for(i=0;i<6;i++){
        scanf("%f", &vet[i]);
    }
    
    for(i=0;i<6;i++){
        if(vet[i] > 0){
            count++;
        }
    }
    
    printf("%d valores positivos\n", count);
    return 0;
}