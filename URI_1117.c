#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int count = 0;
    float n, vet[2];
    while(count < 2){
        scanf("%f", &n);
        if(n >= 0 && n <= 10){
            vet[count] = n;
            count++;
        }else{
            printf("nota invalida\n");
        }
    }
    
    printf("media = %.2f\n", ((vet[0]+vet[1])/2));
    
    return 0;
}