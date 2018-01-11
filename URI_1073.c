#include <stdio.h>
#include <math.h>
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N,i;
    scanf("%d", &N);
    
    for(i=1;i<=N;i++){
        if(i%2 == 0){
            printf("%d^2 = %.0f\n", i, pow(i,2));
        }
    }
    return 0;
}