#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int n,i;
    scanf("%d", &n);
    
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n", i,n,(i*n));
    }
    
    return 0;
}