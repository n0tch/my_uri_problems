#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n, i;
    
    scanf("%d", &n);
    int vet[n];
    
    for(i=0;i<n;i++){
        scanf("%d", &vet[i]);
    }
    
    for(i=0;i<n;i++){
        if(vet[i] == 0){
            printf("NULL\n");
        }else if(vet[i] % 2 == 0 && vet[i] > 0){
            printf("EVEN POSITIVE\n");
        }else if(vet[i] % 2 == 0 && vet[i] < 0){
            printf("EVEN NEGATIVE\n");
        }else if(vet[i] % 2 != 0 && vet[i] < 0){
            printf("ODD NEGATIVE\n");
        }else if(vet[i] % 2 != 0 && vet[i] > 0){
            printf("ODD POSITIVE\n");
        }
    }
 
    return 0;
}