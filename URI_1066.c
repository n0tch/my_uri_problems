#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int vet[5], i, impar=0, par=0, pos=0, neg=0;
    
    for(i=0;i<5;i++){
        scanf("%d", &vet[i]);
        if(vet[i] %2 == 0){
            par++;
        }else{
            impar++;
        }
        
        if(vet[i] > 0){
            pos++;
        }else if(vet[i] < 0){
            neg ++;
        }
    }
    
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    
    return 0;
}