#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    float vet[6],media = 0;
    int i, count=0;
    
    for(i=0;i<6;i++){
        scanf("%f", &vet[i]);
        if(vet[i] > 0 ){
            count++;
            media += vet[i];
        }
    }
    
    printf("%d valores positivos\n", count);
    printf("%.1f\n", (media/count));
    return 0;
}