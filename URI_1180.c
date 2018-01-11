#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,i,menor,indice;
    scanf("%d", &n);
    int X[n];
    
    for(i=0;i<n;i++){
        scanf("%d", &X[i]);
        if(i==0){
            menor = X[i];
            indice = i;
        }else if(X[i] < menor){
            menor = X[i];
            indice = i;
        }
    }
    
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",indice);
    
    return 0;
}