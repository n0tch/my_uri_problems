#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,i;
    scanf("%d", &n);
 
    for(i=1;i<=n;i++){
        if(i%2 != 0){
            printf("%d\n", i);
        }
    }
    return 0;
}