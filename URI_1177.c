#include <stdio.h>
#define N 1000

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int t,i,j,T[N];
    scanf("%d", &t);
    
    for(i=0,j=0;i<N;i++,j++){
        if(j>t-1){
            j=0;
        }
        
        T[i] = j;
        
        printf("N[%d] = %d\n", i,T[i]);
    }
    return 0;
}